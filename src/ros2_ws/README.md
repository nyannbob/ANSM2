
# SVAN_CHAMPion
This is a combined repository, with CHAMP planner implemented on SVAN_M2 URDF.
This assumes you have ROS2 and ROS2-control downloaded.
# Setup
```bash
mkdir svan_champ_ws
mkdir svan_champ_ws/src
cd svan_champ_ws
git clone https://github.com/nyannbob/svan_champ.git src
```

# Changes to make before running
- Absolute paths, these files are currently using absolute paths and would need to be changed for this repo to work (look for /home/nyann)
    - svam_sw2/svanm2_description/launch/display.launch.py
    - svam_sw2/svanm2_description/launch/gazebo.launch.py
    - svam_sw2/svanm2_description/urdf/svanm2_cam.urdf

# Steps for running (from src directory)
1. Go back to your workspace
```bash
cd ..
```
2. Build this repository
```bash
colcon build
```
3. Source the setup file
```bash
source install/setup.bash
```
4. Launch the URDF in gazebo
```bash
ros2 launch svanm2_description gazebo.launch.py
```
5. Launch the controller nodes and planner from CHAMP
```bash
ros2 launch champ_config gazebo.launch.py
```
6. Launch the teleop to control the bot
```bash
ros2 launch champ_teleop teleop.launch.py
```

### SLAM and NAV2
7. Launch slam_toolbox with champ config
```bash
ros2 launch champ_config slam.launch.py
```
8. Launch nav2 with champ config
```bash
ros2 launch champ_config navigation.launch.py
```
# Essential parameters to change in CHAMP code to run other URDFs
- joint_names_, joint_names (contacts_sensor.cpp, quadruped_controller.cpp, message_relay.cpp, state_estimator.cpp)
- gait.yaml (to change gait parameters)
- arm lengths (kinodynamics.hpp)
- odometry/imu values if required (slam.yaml)
