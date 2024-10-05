# Quadruped Robot Navigation using ROS2

This project implements navigation capabilities for Svan M2 
This project focuses on enabling autonomous navigation for the Svan M2, a quadruped robot developed at IIT Kanpur's Mobile Robotics Laboratory. By implementing SLAM (Simultaneous Localization and Mapping) and the Navigation2 stack using ROS2 Humble, Nav2, and SLAM. The Svan M2 can map its environment in real-time and navigate autonomously.

<div align="center">

<table>
  <tr>
    <td>
      <img src="https://github.com/nyannbob/ANSM2/blob/main/sim_nav.gif" alt="Simulation GIF" width="400">
    </td>
  </tr>
  <tr>
    <td align="center"><b>Simulation of navigation algorithm</b></td>
  </tr>
</table>

</div

## Key Features:
- SLAM Toolbox Integration: Implemented SLAM Toolbox for real-time mapping and localization using LIDAR and IMU data.
- Navigation2 Stack: Deployed Nav2 for autonomous path planning, obstacle avoidance, and recovery behaviors.
- Sensor Fusion: Integrated LIDAR, IMU, and odometry sensors for accurate localization and navigation.

## Prerequisites

- Docker
- Docker Compose
- Git

## Project Structure

```
project-root/
│
├── docker/
│   ├── base/
│   │   └── Dockerfile
│   ├── development/
│   │   ├── Dockerfile
│   │   └── docker-compose.yml
│   └── production/
│       ├── Dockerfile
│       └── docker-compose.yml
│
├── src/
│   └── ... (ROS2 packages)
│
├── .gitignore
├── requirements.txt
└── README.md
```

## Getting Started

1. Clone the repository:
   ```
   git clone git@github.com:xterra-robotics/xMo_autonomy.git
   cd xMo_autonomy
   ```

2. Build the Docker image for development:
   ```
   docker-compose -f docker/base/ros2-base-compose.yml build
   docker-compose -f docker/nav2/ros2-nav2-compose.yml build
   ```

3. Run the development container without launching it:
   ```
   docker-compose -f docker/nav2/ros2-nav2-compose.yml up -d

   ```

4. In a new terminal, enter the running container:
   ```
   docker exec -it nav2_ros2_nav2_1 bash
   ```

5. Inside the container, you can now run ROS2 commands, for example:
   ```
   colcon build
   source install/setup.bash
   ros2 launch svanm2_description test.launch.py
   ```

5. Closing the container:
    First exit the container using
    ```
    exit
    ``` 

    Run the following to stop and remove container
    ```
    docker-compose -f docker/nav2/ros2-nav2-compose.yml down
    ```

## Development

- The `src/` directory is mounted as a volume in the development container. Any changes you make to the source files on your host machine will be reflected in the container.
- To add new ROS2 packages, place them in the `src/` directory.
- After adding new packages or making changes, rebuild your workspace inside the container:
  ```
  colcon build
  ```


