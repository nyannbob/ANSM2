# Development Dockerfile
FROM base as dev

# Install development tools
RUN apt-get update && apt-get install -y \
    ros-humble-desktop \
    ros-humble-rviz2 \
    ros-humble-rqt* \
    python3-pip \
    git \
    vim

# Install additional ROS packages for development
RUN apt-get install -y \
    ros-humble-navigation2 \
    ros-humble-nav2-bringup \
    ros-humble-slam-toolbox \
    ros-humble-joint-state-publisher-gui

# Clone your quadruped robot package (replace with your actual repository)
RUN git clone https://github.com/your_username/quadruped_robot.git /ros2_ws/src/quadruped_robot

# Build the workspace
RUN /bin/bash -c "source /opt/ros/humble/setup.bash && colcon build"

# Source the workspace in .bashrc
RUN echo "source /ros2_ws/install/setup.bash" >> ~/.bashrc

CMD ["/bin/bash"]
