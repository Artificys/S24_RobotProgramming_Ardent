#!/usr/bin/env python
# encoding: utf-8
#import public lib
from geometry_msgs.msg import Twist
import sys, select, termios, tty

#import ros lib
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


msg = """
Make an Action on Your SLAM-Bot!
--------------------------------
Movements:
	w : move forward
	a : turn left 90d
	d : turn right 90d
	x : move backward

q/e : turn 180d
z/c : turn 360d
s/S : stop keyboard control
CTRL-C to quit
"""

movements = { 
	'w': (5,0), #move forward
	'a': (0,5), #turn left 90d
	'd': (0,-5), #turn right 90d
	'x': (-5,0), #move backward
	"""
	'q': (),
	'e': (),
	'z': (),
	'c': (),
	"""
	'W': (5,0),
	'A': (0,5),
	'D': (0,-5),
	'X': (0,-5),
	"""
	'Q': (),
	'E': (),
	'Z': (),
	'C': (),
	"""
}



class Yahboom_Keybord(Node):
	def __init__(self,name):
		super().__init__(name)
		self.pub = self.create_publisher(Twist,'cmd_vel',1)
		self.declare_parameter("linear_speed_limit",1.0)
		self.declare_parameter("angular_speed_limit",5.0)
		self.linenar_speed_limit = self.get_parameter("linear_speed_limit").get_parameter_value().double_value
		self.angular_speed_limit = self.get_parameter("angular_speed_limit").get_parameter_value().double_value
		self.settings = termios.tcgetattr(sys.stdin)
	def getKey(self):
		tty.setraw(sys.stdin.fileno())
		rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
		if rlist: key = sys.stdin.read(1)
		else: key = ''
		termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)
		return key
	#need to replace getKey to subscribe
	def vels(self, speed, turn):
		return "currently:\tspeed %s\tturn %s " % (speed,turn)		
	
def main():
	rclpy.init()
	yahboom_keyboard = Yahboom_Keybord("yahboom_keyboard_ctrl")
	(speed, turn) = (0.2, 1.0)
	(x, th) = (0, 0)
	status = 0
	stop = False
	count = 0
	twist = Twist()
	try:
		print(msg)
		print(yahboom_keyboard.vels(speed, turn))
		while (1):
			key = yahboom_keyboard.getKey()
			if key == "s" or key == "S":
				print ("stop keyboard control: {}".format(not stop))
				stop = not stop
			if key in movements.keys():
				x = movements[key][0]
				th = movements[key][1]
				count = 0	
			elif key == ' ': (x, th) = (0, 0)
			else:
				count = count + 1
				if count > 4: (x, th) = (0, 0)
				if (key == '\x03'): break
			"""
            twist.linear.x = speed * x
			twist.angular.z = turn * th
			"""
			twist.linear.x = speed
			twist.angular.z = turn
			#if not stop: yahboom_keyboard.pub.publish(twist)
			if not stop:
				for i in range(1,5):
					yahboom_keyboard.pub.publish(twist)

			if stop:yahboom_keyboard.pub.publish(Twist())
	except Exception as e: print(e)
	finally: yahboom_keyboard.pub.publish(Twist())
	termios.tcsetattr(sys.stdin, termios.TCSADRAIN, yahboom_keyboard.settings)
	yahboom_keyboard.destroy_node()
	rclpy.shutdown()