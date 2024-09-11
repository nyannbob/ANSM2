# Use the official ROS2 Humble base image from OSRF
FROM osrf/ros:humble-desktop

# Install Navigation2, SLAM Toolbox, and their dependencies
RUN apt-get update && apt-get install -y \
    ros-humble-navigation2 \
    ros-humble-nav2-bringup \ 
    ros-humble-slam-toolbox \
    && rm -rf /var/lib/apt/lists/*

# Source the ROS2 environment
SHELL ["/bin/bash", "-c"]
RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc

# Set the entry point to bash
CMD ["bash"]

