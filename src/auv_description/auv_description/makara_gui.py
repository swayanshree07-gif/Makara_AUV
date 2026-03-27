#!/usr/bin/env python3
"""
Makara ROV — Real-Time Debug GUI
Requires: PyQt5, rclpy, pyqtgraph
"""

import sys
import math
import threading
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy

# ROS message types
try:
    from makara_interfaces.msg import ThrusterSpeeds, ThrusterForces, Combined, Setpoint, PID
    from sensor_msgs.msg import Imu
except ImportError:
    print("[WARN] makara_interfaces not found — GUI will remain idle.")
    ThrusterSpeeds = ThrusterForces = Combined = Setpoint = PID = Imu = None

from PyQt5.QtWidgets import (
    QApplication, QMainWindow, QWidget, QVBoxLayout, QHBoxLayout,
    QGridLayout, QLabel, QFrame, QGroupBox, QSizePolicy, QProgressBar,
    QScrollArea, QPushButton
)
from PyQt5.QtCore import Qt, QTimer, pyqtSignal, QObject, QPointF, QRectF
from PyQt5.QtGui import (
    QPainter, QPen, QBrush, QColor, QFont, QLinearGradient,
    QPainterPath, QPolygonF, QFontDatabase
)
import pyqtgraph as pg
import numpy as np
import time

# ─────────────────────────────────────────────
#  THEME
# ─────────────────────────────────────────────
BG        = "#0a0e14"
PANEL     = "#0f1520"
BORDER    = "#1e2d40"
ACCENT    = "#00d4ff"
ACCENT2   = "#ff6b35"
GREEN     = "#00ff88"
YELLOW    = "#ffd700"
RED       = "#ff3355"
TEXT      = "#c8d8e8"
TEXT_DIM  = "#4a6070"
TEXT_HEAD = "#ffffff"

AXIS_COLORS = {
    "surge": "#ffd700",
    "sway":  "#bf7fff",
    "heave": "#ff3355",
    "roll":  "#ff6b35",
    "pitch": "#00d4ff",
    "yaw":   "#00ff88",
}

STYLESHEET = f"""
QMainWindow, QWidget {{
    background-color: {BG};
    color: {TEXT};
    font-family: 'Courier New', monospace;
    font-size: 11px;
}}
QGroupBox {{
    border: 1px solid {BORDER};
    border-radius: 4px;
    margin-top: 18px;
    padding: 8px;
    background-color: {PANEL};
}}
QGroupBox::title {{
    subcontrol-origin: margin;
    left: 10px;
    padding: 0 4px;
    color: {ACCENT};
    font-size: 10px;
    letter-spacing: 2px;
    text-transform: uppercase;
}}
QLabel {{ background: transparent; }}
QScrollArea {{ border: none; background: transparent; }}
QScrollBar:vertical {{
    background: {PANEL}; width: 6px; border-radius: 3px;
}}
QScrollBar::handle:vertical {{
    background: {BORDER}; border-radius: 3px;
}}
"""

# ─────────────────────────────────────────────
#  DATA STORE
# ─────────────────────────────────────────────
class ROVData(QObject):
    updated = pyqtSignal()

    def __init__(self):
        super().__init__()
        self.imu_roll  = 0.0; self.imu_pitch = 0.0; self.imu_yaw = 0.0
        self.imu_ax = 0.0;   self.imu_ay = 0.0;    self.imu_az = 0.0
        self.imu_gx = 0.0;   self.imu_gy = 0.0;    self.imu_gz = 0.0
        self.thruster_pwm = [1500] * 8
        self.thruster_forces = [0.0] * 8
        self.setpoints  = [0.0] * 6
        self.actual     = [0.0] * 6
        self.pid_err    = [0.0] * 6
        self.depth      = 0.0
        self.AXES       = ["surge", "sway", "heave", "roll", "pitch", "yaw"]
        self.timestamps = []
        self.history    = {k: [] for k in self.AXES}
        self.sp_history = {k: [] for k in self.AXES}
        self._t0        = time.monotonic()
        
        # Demo mode support
        if not rclpy.ok():
            self._demo_timer = QTimer()
            self._demo_timer.timeout.connect(self._generate_demo_data)
            self._demo_timer.start(100)

    def _generate_demo_data(self):
        t = time.monotonic() - self._t0
        for i in range(8):
            self.thruster_forces[i] = 2.0 * math.sin(t + i*0.5)
            # Map force to PWM (approx)
            if self.thruster_forces[i] >= 0:
                self.thruster_pwm[i] = int(1500 + (self.thruster_forces[i]/5.1)*400)
            else:
                self.thruster_pwm[i] = int(1500 + (self.thruster_forces[i]/3.7)*400)
        self.push_history()
        self.updated.emit()

    def push_history(self):
        t = time.monotonic() - self._t0
        self.timestamps.append(t)
        for i, k in enumerate(self.AXES):
            self.history[k].append(self.actual[i])
            self.sp_history[k].append(self.setpoints[i])

    def clear_history(self):
        self.timestamps.clear()
        for k in self.AXES:
            self.history[k].clear()
            self.sp_history[k].clear()
        self._t0 = time.monotonic()

data = ROVData()

# ─────────────────────────────────────────────
#  ROS NODE
# ─────────────────────────────────────────────
class MakaraListener(Node):
    def __init__(self):
        super().__init__("makara_gui_listener")
        qos = QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)

        if ThrusterSpeeds:
            self.create_subscription(ThrusterSpeeds, "/thruster_speeds",  self._cb_thr,  qos)
        if ThrusterForces:
            self.create_subscription(ThrusterForces, "/thruster_forces",  self._cb_forces, qos)
        if Combined:
            self.create_subscription(Combined, "/combined", self._cb_comb, qos)
        if Setpoint:
            self.create_subscription(Setpoint, "/setpoints", self._cb_sp, qos)
        if Imu:
            self.create_subscription(Imu, "/imu/data", self._cb_imu, qos)

    def _cb_thr(self, msg):
        n = min(len(msg.data), 8)
        data.thruster_pwm[:n] = list(msg.data[:n])
        data.updated.emit()

    def _cb_forces(self, msg):
        n = min(len(msg.data), 8)
        data.thruster_forces[:n] = list(msg.data[:n])
        data.updated.emit()

    def _cb_comb(self, msg):
        # Combined order: [Roll, Pitch, Yaw], [Vx, Vy, Vz], Depth
        # Reorder to data.actual: [Surge, Sway, Heave, Roll, Pitch, Yaw]
        data.actual[3] = msg.angular[0]; data.actual[4] = msg.angular[1]; data.actual[5] = msg.angular[2]
        data.actual[0] = msg.linear[0];  data.actual[1] = msg.linear[1];  data.actual[2] = msg.depth
        data.depth = msg.depth
        for i in range(6): data.pid_err[i] = data.setpoints[i] - data.actual[i]
        data.push_history()

    def _cb_sp(self, msg):
        if len(msg.setpoints) >= 6: data.setpoints = list(msg.setpoints[:6])

    def _cb_imu(self, msg):
        q = msg.orientation; sinr = 2*(q.w*q.x + q.y*q.z); cosr = 1 - 2*(q.x*q.x + q.y*q.y)
        data.imu_roll  = math.degrees(math.atan2(sinr, cosr))
        sinp = 2*(q.w*q.y - q.z*q.x); data.imu_pitch = math.degrees(math.asin(max(-1, min(1, sinp))))
        siny = 2*(q.w*q.z + q.x*q.y); cosy = 1 - 2*(q.y*q.y + q.z*q.z); data.imu_yaw = math.degrees(math.atan2(siny, cosy))
        data.imu_ax = msg.linear_acceleration.x; data.imu_ay = msg.linear_acceleration.y; data.imu_az = msg.linear_acceleration.z
        data.imu_gx = msg.angular_velocity.x; data.imu_gy = msg.angular_velocity.y; data.imu_gz = msg.angular_velocity.z
        data.updated.emit()

# ─────────────────────────────────────────────
#  WIDGETS
# ─────────────────────────────────────────────
class AttitudeWidget(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent); self.setMinimumSize(180, 180); self._roll = 0.0; self._pitch = 0.0; self._yaw = 0.0
    def set_attitude(self, roll, pitch, yaw):
        self._roll = roll; self._pitch = pitch; self._yaw = yaw; self.update()
    def paintEvent(self, _):
        p = QPainter(self); p.setRenderHint(QPainter.Antialiasing); w, h = self.width(), self.height(); cx, cy, r = w//2, h//2, min(w, h)//2 - 8
        path = QPainterPath(); path.addEllipse(cx-r, cy-r, 2*r, 2*r); p.setClipPath(path)
        p.save(); p.translate(cx, cy); p.rotate(-self._roll); pitch_px = self._pitch * (r / 45.0)
        sky = QLinearGradient(0, -r, 0, pitch_px); sky.setColorAt(0, QColor("#0a2a4a")); sky.setColorAt(1, QColor("#1565a0"))
        p.setBrush(QBrush(sky)); p.setPen(Qt.NoPen); p.drawRect(-r, -r, 2*r, r + int(pitch_px))
        gnd = QLinearGradient(0, pitch_px, 0, r); gnd.setColorAt(0, QColor("#5c3a1e")); gnd.setColorAt(1, QColor("#3a2010"))
        p.setBrush(QBrush(gnd)); p.drawRect(-r, int(pitch_px), 2*r, r - int(pitch_px))
        p.setPen(QPen(QColor(TEXT_HEAD), 2)); p.drawLine(-r, int(pitch_px), r, int(pitch_px)); p.restore()
        p.setClipping(False); p.setPen(QPen(QColor(ACCENT), 1, Qt.DashLine)); p.drawArc(cx-r, cy-r, 2*r, 2*r, 30*16, 120*16)
        p.save(); p.translate(cx, cy); p.rotate(-self._roll); poly = QPolygonF([QPointF(0, -r+4), QPointF(-5, -r+14), QPointF(5, -r+14)]); p.setBrush(QBrush(QColor(YELLOW))); p.setPen(Qt.NoPen); p.drawPolygon(poly); p.restore()
        p.setBrush(QBrush(QColor(TEXT_HEAD))); p.setPen(Qt.NoPen); p.drawEllipse(cx-3, cy-3, 6, 6)
        p.setPen(QPen(QColor(TEXT_HEAD), 2)); p.drawLine(cx-30, cy, cx-8, cy); p.drawLine(cx+8, cy, cx+30, cy)
        p.setPen(QPen(QColor(BORDER), 2)); p.setBrush(Qt.NoBrush); p.drawEllipse(cx-r, cy-r, 2*r, 2*r)
        p.save(); p.translate(cx, cy); p.rotate(self._yaw); p.setPen(QPen(QColor(ACCENT2), 2)); p.drawLine(0, -r, 0, -r+10); p.restore()

class ROVSchematicWidget(QWidget):
    # Order matching Controller Matrix: H1, H2, H3, H4, V2, V1, V4, V3
    THRUSTERS = [
        ("H1", -0.55, -0.45,  45, False), # 0
        ("H2",  0.55, -0.45, -45, False), # 1
        ("H3",  0.55,  0.45,  45, False), # 2
        ("H4", -0.55,  0.45, -45, False), # 3
        ("V2",  0.38, -0.28,   0,  True),  # 4
        ("V1", -0.38, -0.28,   0,  True),  # 5
        ("V4",  0.38,  0.28,   0,  True),  # 6
        ("V3", -0.38,  0.28,   0,  True)   # 7
    ]
    THR_COLORS = ["#00d4ff","#ffd700","#00ff88","#ff6b35","#bf7fff","#ff3355","#00d4ff","#ffd700"]
    
    def __init__(self, parent=None):
        super().__init__(parent); self.setMinimumSize(320, 320); self._pwm = [1500]*8; self._forces = [0.0]*8
    def update_data(self, pwm, forces):
        self._pwm = list(pwm); self._forces = list(forces); self.update()
    def _norm(self, force):
        if force >= 0: return force / 50.0
        return force / 40.0
    def paintEvent(self, _):
        p = QPainter(self); p.setRenderHint(QPainter.Antialiasing); w, h = self.width(), self.height(); cx, cy = w//2, h//2; hw, hh = int(w*0.22), int(h*0.30)
        hp = QPainterPath(); hp.moveTo(cx, cy-hh-14); hp.lineTo(cx+hw, cy-hh//2); hp.lineTo(cx+hw, cy+hh); hp.lineTo(cx-hw, cy+hh); hp.lineTo(cx-hw, cy-hh//2); hp.closeSubpath()
        g = QLinearGradient(cx-hw, 0, cx+hw, 0); g.setColorAt(0, QColor("#0b1a2a")); g.setColorAt(0.5, QColor("#162840")); g.setColorAt(1, QColor("#0b1a2a")); p.setBrush(QBrush(g)); p.setPen(QPen(QColor(BORDER), 2)); p.drawPath(hp)
        p.setPen(QColor(ACCENT)); p.setFont(QFont("Courier New", 8, QFont.Bold)); p.drawText(cx-30, cy-10, 60, 14, Qt.AlignCenter, "MAKARA")
        for i, (name, rx, ry, ang, is_vert) in enumerate(self.THRUSTERS):
            tx, ty = cx+int(rx*w*0.46), cy+int(ry*h*0.46); f, col = self._forces[i], self.THR_COLORS[i]; n = self._norm(f)
            if is_vert:
                r = 10; col_ind = QColor(GREEN if f>0.1 else (RED if f<-0.1 else BORDER)); p.setBrush(QBrush(col_ind)); p.setPen(QPen(QColor(col), 1)); p.drawEllipse(tx-r, ty-r, 2*r, 2*r)
            else:
                p.save(); p.translate(tx, ty); p.rotate(ang); p.setBrush(QBrush(QColor(PANEL))); p.setPen(QPen(QColor(col), 1)); p.drawRoundedRect(-6, -10, 12, 20, 2, 2); p.restore()
                len_arr = int(abs(n)*28)+6; col_arr = QColor(col) if abs(f)>0.1 else QColor(TEXT_DIM); p.save(); p.translate(tx, ty); p.rotate(ang+(0 if f>=0 else 180)); p.setPen(QPen(col_arr, 2)); p.drawLine(0, 0, 0, -len_arr); p.setBrush(QBrush(col_arr)); p.setPen(Qt.NoPen); p.drawPolygon(QPolygonF([QPointF(0,-len_arr), QPointF(-4,-len_arr+8), QPointF(4,-len_arr+8)])); p.restore()
            lx, ly = tx+int((tx-cx)*0.55), ty+int((ty-cy)*0.55); p.setFont(QFont("Courier New", 7, QFont.Bold))
            p.setPen(QColor(col)); p.drawText(lx-22, ly-12, 44, 10, Qt.AlignCenter, name)
            p.setPen(QColor(TEXT_HEAD)); p.drawText(lx-22, ly-2, 44, 10, Qt.AlignCenter, str(self._pwm[i]))
            p.setPen(QColor(GREEN if f>=0 else RED)); p.drawText(lx-22, ly+8, 44, 10, Qt.AlignCenter, f"{f:+.1f}N")

class ThrusterTablePanel(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent); self.setMinimumHeight(240)
    def paintEvent(self, _):
        p = QPainter(self); p.setRenderHint(QPainter.Antialiasing); w, h = self.width(), self.height(); p.setPen(Qt.NoPen)
        row_h = (h-20) // 8; header_y = 15; p.setFont(QFont("Courier New", 8, QFont.Bold))
        p.setPen(QColor(TEXT_DIM)); p.drawText(10, header_y, 60, 15, Qt.AlignLeft, "THRUSTER"); p.drawText(80, header_y, 40, 15, Qt.AlignCenter, "PWM"); p.drawText(130, header_y, 50, 15, Qt.AlignCenter, "FORCE")
        bar_x, bar_w = 190, w - 210; center_x = bar_x + int(bar_w * (40.0 / (40.0 + 50.0)))
        for i, (name, _, _, _, _) in enumerate(ROVSchematicWidget.THRUSTERS):
            y = header_y + 20 + i*row_h; f, pwm = data.thruster_forces[i], data.thruster_pwm[i]
            p.setPen(QColor(ROVSchematicWidget.THR_COLORS[i])); p.drawText(10, y, 60, 15, Qt.AlignLeft, name)
            p.setPen(QColor(TEXT_HEAD)); p.drawText(80, y, 40, 15, Qt.AlignCenter, str(pwm))
            p.setPen(QColor(GREEN if f>=0 else RED)); p.drawText(130, y, 50, 15, Qt.AlignCenter, f"{f:+.2f}N")
            p.setPen(QPen(QColor(BORDER), 1)); p.drawLine(bar_x, y+7, bar_x+bar_w, y+7); p.setPen(QPen(QColor(TEXT_DIM), 1)); p.drawLine(center_x, y, center_x, y+15)
            if f >= 0:
                bw = int((f / 50.0) * (bar_x + bar_w - center_x)); p.fillRect(center_x, y+2, bw, 10, QBrush(QColor(GREEN)))
                if f > 50.0 * 0.9: p.setBrush(QBrush(QColor(YELLOW))); p.drawEllipse(bar_x+bar_w+5, y+3, 8, 8)
            else:
                bw = int((abs(f) / 40.0) * (center_x - bar_x)); p.fillRect(center_x - bw, y+2, bw, 10, QBrush(QColor(RED)))
                if abs(f) > 40.0 * 0.9: p.setBrush(QBrush(QColor(YELLOW))); p.drawEllipse(bar_x+bar_w+5, y+3, 8, 8)

class PlotPanel(QWidget):
    def __init__(self, key, color, parent=None):
        super().__init__(parent); self._key, self._color, self._expanded_win = key, color, None
        layout = QVBoxLayout(self); layout.setContentsMargins(0, 0, 0, 2)
        hdr = QHBoxLayout(); lbl = QLabel(key.upper()); lbl.setStyleSheet(f"color:{color}; font-size:10px; font-weight:bold; letter-spacing:1px; font-family:'Courier New';"); hdr.addWidget(lbl); hdr.addStretch()
        exp_btn = QPushButton("⤢"); exp_btn.setFixedSize(20, 16); exp_btn.clicked.connect(self._expand); hdr.addWidget(exp_btn); layout.addLayout(hdr)
        self._plot = pg.PlotWidget(); self._plot.setFixedHeight(70); self._plot.showGrid(x=False, y=True, alpha=0.12); self._plot.hideAxis("bottom"); self._plot.getAxis("left").setWidth(32)
        self._curve_act = self._plot.plot(pen=pg.mkPen(color, width=1.5)); self._curve_sp = self._plot.plot(pen=pg.mkPen(YELLOW, width=1, style=Qt.DashLine)); layout.addWidget(self._plot)
    def _expand(self):
        if self._expanded_win is None or not self._expanded_win.isVisible(): self._expanded_win = ExpandedPlotWindow(self._key, self._color); self._expanded_win.show()
        else: self._expanded_win.raise_()
    def refresh(self):
        ts, h, hs = data.timestamps, data.history.get(self._key, []), data.sp_history.get(self._key, [])
        n = min(len(ts), len(h), len(hs)) 
        if n == 0: return
        t_arr = np.array(ts[:n]); mask = t_arr >= (t_arr[-1]-30.0)
        self._curve_act.setData(t_arr[mask], np.array(h[:n])[mask]); self._curve_sp.setData(t_arr[mask], np.array(hs[:n])[mask])

class MakaraGUI(QMainWindow):
    def __init__(self):
        super().__init__(); self.setWindowTitle("MAKARA ROV — Debug Console"); self.setMinimumSize(1280, 800); self.setStyleSheet(STYLESHEET)
        central = QWidget(); self.setCentralWidget(central); root = QHBoxLayout(central); root.setContentsMargins(8,8,8,8); root.setSpacing(8)
        left = QVBoxLayout(); left.setSpacing(6); att_box = QGroupBox("ATTITUDE"); att_lay = QVBoxLayout(att_box); self._att = AttitudeWidget(); att_lay.addWidget(self._att, alignment=Qt.AlignCenter); left.addWidget(att_box)
        frame_box = QGroupBox("THRUSTER LAYOUT"); frame_lay = QVBoxLayout(frame_box); self._rov_frame = ROVSchematicWidget(); frame_lay.addWidget(self._rov_frame); left.addWidget(frame_box); left.addStretch(); root.addLayout(left, 3)
        mid = QVBoxLayout(); mid.setSpacing(6); imu_box = QGroupBox("IMU"); imu_grid = QGridLayout(imu_box); self._imu_labels = {}
        fields = [("Roll","°",ACCENT2),("Pitch","°",ACCENT),("Yaw","°",GREEN),("Acc X","m/s²",TEXT),("Acc Y","m/s²",TEXT),("Acc Z","m/s²",TEXT),("Gyr X","r/s",TEXT),("Gyr Y","r/s",TEXT),("Gyr Z","r/s",TEXT)]
        for i, (name, unit, col) in enumerate(fields):
            r, c = divmod(i, 3); imu_grid.addWidget(QLabel(f"{name} ({unit})"), r*2, c); v = QLabel("0.000"); v.setStyleSheet(f"color:{col}; font-size:13px; font-family:'Courier New';"); v.setAlignment(Qt.AlignRight); imu_grid.addWidget(v, r*2+1, c); self._imu_labels[name] = v
        mid.addWidget(imu_box); sp_box = QGroupBox("SETPOINT vs ACTUAL"); sp_grid = QGridLayout(sp_box)
        self._sp_vals, self._act_vals, self._err_vals = [], [], []
        for i, (k, col) in enumerate(AXIS_COLORS.items()):
            sp_grid.addWidget(QLabel(k.upper()), i+1, 0)
            sv = QLabel("0.000"); sv.setStyleSheet(f"color:{YELLOW}; font-size:13px; font-family:'Courier New';"); sp_grid.addWidget(sv, i+1, 1); self._sp_vals.append(sv)
            av = QLabel("0.000"); av.setStyleSheet(f"color:{col}; font-size:13px; font-family:'Courier New';"); sp_grid.addWidget(av, i+1, 2); self._act_vals.append(av)
            ev = QLabel("0.000"); ev.setStyleSheet(f"color:{RED}; font-size:13px; font-family:'Courier New';"); sp_grid.addWidget(ev, i+1, 3); self._err_vals.append(ev)
        mid.addWidget(sp_box); thr_table_box = QGroupBox("THRUSTER STATUS"); thr_table_lay = QVBoxLayout(thr_table_box); self._thr_table = ThrusterTablePanel(); thr_table_lay.addWidget(self._thr_table); mid.addWidget(thr_table_box)
        depth_box = QGroupBox("DEPTH"); depth_lay = QHBoxLayout(depth_box); self._depth_lbl = QLabel("0.00 m"); self._depth_lbl.setStyleSheet(f"color:{ACCENT}; font-size:22px; font-family:'Courier New'; font-weight:bold;"); depth_lay.addWidget(self._depth_lbl); mid.addWidget(depth_box); mid.addStretch(); root.addLayout(mid, 4)
        right = QVBoxLayout(); right.setSpacing(6); hist_hdr = QGroupBox("SESSION HISTORY"); hist_hdr_lay = QVBoxLayout(hist_hdr)
        ctrl = QHBoxLayout(); self._rec_lbl = QLabel("● LIVE"); self._rec_lbl.setStyleSheet(f"color:{RED}; font-size:11px; font-weight:bold;"); ctrl.addWidget(self._rec_lbl); self._pts_lbl = QLabel("0 pts"); ctrl.addWidget(self._pts_lbl); ctrl.addStretch()
        clear_btn = QPushButton("🗑 Clear"); clear_btn.clicked.connect(data.clear_history); ctrl.addWidget(clear_btn); hist_hdr_lay.addLayout(ctrl)
        plots_cont = QWidget(); plots_lay = QVBoxLayout(plots_cont); self._plots = []
        for k, c in AXIS_COLORS.items(): pp = PlotPanel(k, c); plots_lay.addWidget(pp); self._plots.append(pp)
        scroll = QScrollArea(); scroll.setWidget(plots_cont); scroll.setWidgetResizable(True); hist_hdr_lay.addWidget(scroll); right.addWidget(hist_hdr); root.addLayout(right, 3)
        self._timer = QTimer(); self._timer.timeout.connect(self._refresh); self._timer.start(50)
    def _refresh(self):
        d = data; self._imu_labels["Roll"].setText(f"{d.imu_roll:+.2f}"); self._imu_labels["Pitch"].setText(f"{d.imu_pitch:+.2f}"); self._imu_labels["Yaw"].setText(f"{d.imu_yaw:+.2f}"); self._imu_labels["Acc X"].setText(f"{d.imu_ax:+.3f}"); self._imu_labels["Acc Y"].setText(f"{d.imu_ay:+.3f}"); self._imu_labels["Acc Z"].setText(f"{d.imu_az:+.3f}"); self._imu_labels["Gyr X"].setText(f"{d.imu_gx:+.3f}"); self._imu_labels["Gyr Y"].setText(f"{d.imu_gy:+.3f}"); self._imu_labels["Gyr Z"].setText(f"{d.imu_gz:+.3f}")
        self._att.set_attitude(d.imu_roll, d.imu_pitch, d.imu_yaw); self._rov_frame.update_data(d.thruster_pwm, d.thruster_forces); self._thr_table.update()
        for i in range(6): self._sp_vals[i].setText(f"{d.setpoints[i]:+.3f}"); self._act_vals[i].setText(f"{d.actual[i]:+.3f}"); self._err_vals[i].setText(f"{d.pid_err[i]:+.3f}")
        self._depth_lbl.setText(f"{d.depth:.3f} m"); n = len(data.timestamps); self._pts_lbl.setText(f"{n} pts"); [pp.refresh() for pp in self._plots]

def main():
    app = QApplication(sys.argv)
    rclpy.init(args=sys.argv); node = MakaraListener()
    threading.Thread(target=lambda: rclpy.spin(node), daemon=True).start()
    win = MakaraGUI(); win.show(); sys.exit(app.exec_())

if __name__ == "__main__": main()
