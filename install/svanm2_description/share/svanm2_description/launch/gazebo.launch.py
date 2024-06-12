import os
import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    pkg_share = launch_ros.substitutions.FindPackageShare(package='svanm2_description').find('svanm2_description')
    pkg_share_gazebo = launch_ros.substitutions.FindPackageShare(package='gazebo_ros').find('gazebo_ros')

    default_model_path = os.path.join(pkg_share, 'urdf/svanm2_cam.urdf')
    default_rviz_config_path = os.path.join(pkg_share, 'rviz/urdf.rviz')
    urdf = open(default_model_path).read()
    params = {'robot_description':urdf, 'use-sim-time':use_sim_time}
    included_launch = launch.actions.IncludeLaunchDescription(launch.launch_description_sources.PythonLaunchDescriptionSource(pkg_share_gazebo + '/launch/gazebo.launch.py'))

    static_transform_publisher_node = launch_ros.actions.Node(
        package='tf2',
        executable='static_transform_publisher',
        name='tf2_footprint_base',
        arguments="0 0 0 0 0 0 base_link base_footprint 40"
    )
    spawn_robot = launch_ros.actions.Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-entity','robot1','-topic','/robot_description'],
        output='screen',
    )

    fake_joint_calibration_node = launch_ros.actions.Node(
        package='ros2topic',
        executable='ros2topic',
        name='fake_joint-calibration',
        arguments="pub /calibrated std_msgs/Bool true"
    )
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(name='model', default_value=default_model_path,
                                            description='Absolute path to robot urdf file'),       
        included_launch,
        static_transform_publisher_node,
        fake_joint_calibration_node,
        spawn_robot,
    ])

