import pybullet as p
import time
import pybullet_data
import numpy as np


physicsClient = p.connect(p.GUI)
p.setAdditionalSearchPath(pybullet_data.getDataPath())

p.setGravity(0,0,-10)
planeId = p.loadURDF('plane.urdf')
cubeStartPos = [0,0,1]
cubeStartOrientation = p.getQuaternionFromEuler([0,0,0])
robot = p.loadURDF("your_urdf.urdf", cubeStartPos, cubeStartOrientation, useFixedBase=1)

#camera_target_position = [0,0,0]
#camera_distance = 5
#camera_yaw = 20
#camera_pitch = -20
#p.resetDebugVisualizerCamera(camera_distance,camera_yaw,camera_pitch,camera_target_position)

num_of_joints = p.getNumJoints(robot)
print(num_of_joints)

joint1 = p.addUserDebugParameter('FR_abd_l', -np.pi, np.pi,0)
joint2 = p.addUserDebugParameter('FR_hip_l', -np.pi, np.pi,0)
joint3 = p.addUserDebugParameter('FR_knee_l', -np.pi, np.pi,0)
#joint4 = p.addUserDebugParameter('dummy1', 0, np.pi/2,0)

joint5 = p.addUserDebugParameter('FL_abd_l', -np.pi, np.pi,0)
joint6 = p.addUserDebugParameter('FL_hip_l', -np.pi, np.pi,0)
joint7 = p.addUserDebugParameter('FL_knee_l', -np.pi, np.pi,0)
#joint8 = p.addUserDebugParameter('dummy2', 0, np.pi/2,0)

joint9 = p.addUserDebugParameter('RR_abd_l', -np.pi, np.pi,0)
joint10 = p.addUserDebugParameter('RR_hip_l', -np.pi, np.pi,0)
joint11 = p.addUserDebugParameter('RR_knee_l', -np.pi, np.pi,0)
#joint12 = p.addUserDebugParameter('dummy3', 0, np.pi/2,0)

joint13= p.addUserDebugParameter('RL_abd_l', -np.pi, np.pi,0)
joint14 = p.addUserDebugParameter('RL_hip_l', -np.pi, np.pi,0)
joint15 = p.addUserDebugParameter('RL_knee_l', -np.pi, np.pi,0)
#joint16 = p.addUserDebugParameter('dummy4', 0, np.pi/2,0)


markers = {}
for link_idx in range(-1, num_of_joints):  # -1 represents the base link
    com_position, _ = p.getDynamicsInfo(robot, link_idx)[:2]
    if com_position != [0, 0, 0]:  # Exclude links without center of mass information
        marker = p.createVisualShape(shapeType=p.GEOM_SPHERE, radius=0.02, rgbaColor=[1, 0, 0, 1])  # Red sphere marker
        markers[link_idx] = p.createMultiBody(baseVisualShapeIndex=marker, basePosition=com_position)

while True:
    user_joint1 = p.readUserDebugParameter(joint1)
    user_joint2 = p.readUserDebugParameter(joint2)
    user_joint3 = p.readUserDebugParameter(joint3)
#    user_joint4 = p.readUserDebugParameter(joint4)

    user_joint5 = p.readUserDebugParameter(joint5)
    user_joint6 = p.readUserDebugParameter(joint6)
    user_joint7 = p.readUserDebugParameter(joint7)
#    user_joint8 = p.readUserDebugParameter(joint8)

    user_joint9 = p.readUserDebugParameter(joint9)
    user_joint10 = p.readUserDebugParameter(joint10)
    user_joint11 = p.readUserDebugParameter(joint11)
#    user_joint12 = p.readUserDebugParameter(joint12)

    user_joint13 = p.readUserDebugParameter(joint13)
    user_joint14 = p.readUserDebugParameter(joint14)
    user_joint15 = p.readUserDebugParameter(joint15)
#    user_joint16 = p.readUserDebugParameter(joint16)

    p.setJointMotorControl2(robot, 0, p.POSITION_CONTROL, targetPosition=user_joint1)
    p.setJointMotorControl2(robot, 1, p.POSITION_CONTROL, targetPosition=user_joint2)
    p.setJointMotorControl2(robot, 2, p.POSITION_CONTROL, targetPosition=user_joint3)
#   p.setJointMotorControl2(robot, 3, p.POSITION_CONTROL, targetPosition=user_joint4)

    p.setJointMotorControl2(robot, 4, p.POSITION_CONTROL, targetPosition=user_joint5)
    p.setJointMotorControl2(robot, 5, p.POSITION_CONTROL, targetPosition=user_joint6)
    p.setJointMotorControl2(robot, 6, p.POSITION_CONTROL, targetPosition=user_joint7)
    #   p.setJointMotorControl2(robot, 3, p.POSITION_CONTROL, targetPosition=user_joint8)

    p.setJointMotorControl2(robot, 8, p.POSITION_CONTROL, targetPosition=user_joint9)
    p.setJointMotorControl2(robot, 9, p.POSITION_CONTROL, targetPosition=user_joint10)
    p.setJointMotorControl2(robot, 10, p.POSITION_CONTROL, targetPosition=user_joint11)
    #   p.setJointMotorControl2(robot, 3, p.POSITION_CONTROL, targetPosition=user_joint12)

    p.setJointMotorControl2(robot, 12, p.POSITION_CONTROL, targetPosition=user_joint13)
    p.setJointMotorControl2(robot, 13, p.POSITION_CONTROL, targetPosition=user_joint14)
    p.setJointMotorControl2(robot, 14, p.POSITION_CONTROL, targetPosition=user_joint15)
    #   p.setJointMotorControl2(robot, 3, p.POSITION_CONTROL, targetPosition=user_joint16)
    p.stepSimulation()

p.disconnect()
