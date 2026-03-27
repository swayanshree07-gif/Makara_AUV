# AC_AttitudeControl Library Logic

This package contains the core logic and code snippets extracted from the ArduPilot Copter programming documentation:
[Attitude Control (Library)](https://ardupilot.org/dev/docs/apmcopter-programming-attitude-control-2.html)

## Core Methods

The `AC_AttitudeControl` library provides several ways to control the vehicle's attitude. The most common methods are:

### 1. `angle_ef_roll_pitch_rate_ef_yaw`
Accepts "earth frame" angles for roll and pitch, and an "earth frame" rate for yaw.
- `roll = -1000` (10° left)
- `pitch = -1500` (15° forward)
- `yaw = 500` (5°/sec right)

### 2. `angle_ef_roll_pitch_yaw`
Accepts "earth frame" angles for roll, pitch, and yaw.
- Providing a `yaw` of `500` rotates the vehicle to 5 degrees east of north.

### 3. `rate_bf_roll_pitch_yaw`
Accepts "body frame" rates (in degrees/sec) for roll, pitch, and yaw.
- `roll = -1000` (10°/sec left)
- `pitch = -1500` (15°/sec forward)
- `yaw = 500` (5° about the Z-axis)

## Implementation Context

### Flight Mode Entry Point
The flight mode logic is typically handled in `update_flight_mode()`, which calls the specific `<flight mode>_run()` function (e.g., `stabilize_run()`, `rtl_run()`).
- On Pixhawk, this is called at **400Hz**.
- On APM2.x, this is called at **100Hz**.

### User Input Handling
Inputs are typically retrieved from:
- `g.rc_1.control_in` // Roll
- `g.rc_2.control_in` // Pitch
- `g.rc_3.control_in` // Throttle
- `g.rc_4.control_in` // Yaw

### Downstream Motor Commands (AP_Motors)
`AC_AttitudeControl` eventually passes values to the `AP_Motors` methods:
- `set_roll()` (Range: -4500 to 4500)
- `set_pitch()` (Range: -4500 to 4500)
- `set_yaw()` (Range: -4500 to 4500)
- `set_throttle()` (Range: 0 to 1000)

### Low-Level Output
The final PWM output is handled via:
`hal.rcout->write()`

## ROS 2 Node
The included `attitude_controller_node.cpp` demonstrates a skeletal implementation of these concepts within a ROS 2 lifecycle.
