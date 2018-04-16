# Robot-in-a-maze-Backtracking-
Ultrasonic sensor (HC-SR04) can be used
Ultrasonic Sensor is a sensor which send ultrasonic waves from one end and recieves the ultrasonic sound waves from another end. We 
can find the distance of the obtacle by multiplying the time taken to recieve the signal to the speed of the sound(340m/sec). If 
the obstacle is found we will stop the car from going in the direction where obstacle is found and rather turn it to the another 
direction.We can use one ultrasonic sensor for each direction to ensure maximum protection to the car.


Navigation Algorithm:-
user enter the maze matrix where 0 means restriction and 1 means the path.A robot starts from source(enter 
by the user) and has to reach the destination(enter by the user). the robot can move in all four direction
left,right,up and down. from the starting positon the robot moves in right direction if the path is not
possible then the robot start moves in downward direction and if the path is not possible then the robot
moves in left direction and if the path is not possible again the robot moves in upward direction and if
there is a path possible anywhere then robot move towards that path and again the recursion starts. the
recursion stop at that time when the robot reaches it destination and the total no of path and the
co-ordinates move by the robot get printed.

Rough Terrain:- For runnning our vechicle on Rouch Terrain our car should have a good a gap between the car chasis and the 
ground.The tires shoud have big surface area in order to ensure good grip to the suurface. We can also design our car to be a 4X 
Powered system where each wheel will have its own power which will be very useful in climbing the car over steep surfaces.Motors 
must offer high torque power and a reasonable RPM to ensure enough speed. 

Low visibility:-
For low visibility we can use front lights and tail lights which will turn automatically on/off when the light is in the required 
range. We can use LDR(Light Dependent Resistance) to control the lights.
