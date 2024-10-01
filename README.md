# Quadruped Robot Navigation using ROS2

This project implements navigation capabilities for Svan M2 using ROS2 Humble, Nav2, and SLAM.

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
   sudo docker-compose -f docker/base/ros2-base-compose.yml build
   sudo docker-compose -f docker/nav2/ros2-nav2-compose.yml build
   sudo docker-compose -f docker/nav2/ros2-nav2-compose.yml up -d
   ```

3. Run the development container without launching it:
   ```

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

## Testing

(Add information about how to run tests for your project)

## Deployment

(Add information about how to deploy your project in a production environment)

## Contributing

(Add guidelines for contributing to your project)

## License

(Add license information)

## Contact

Aditya Pratap Singh Rajawat - apsr@xterrarobotics.com

Project Link: [https://github.com/xterrarobotics/xMo_autonomy](https://github.com/xterrarobotics/xMo_autonomy)
