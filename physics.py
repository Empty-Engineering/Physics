import math
class physics():
	def __init__(self, distance, velocity, acceleration, time) -> None:
		self.distance = distance
		self.velocity = velocity
		self.acceleration = acceleration
		self.time = time
		
	def get_velocity(self, distance, velocity, acceleration, time) -> float:
		if self.acceleration == 0:
			return (self.distance/self.time)+self.velocity
		else:
			return (self.acceleration*self.time)+self.velocity
	def get_acceleration(self, distance, velocity, acceleration, time) -> float:
		if self.velocity == 0:
			return (self.distance/math.pow(self.time, 2))+self.acceleration
		else:
			return self.velocity/self.time
	def get_distance(self, distance, velocity, acceleration, time) -> float:
		return (self.velocity*self.time)+(((self.acceleration)*(self.time))/2)
	def get_Rotational_Velocity(self, distance, velocity, acceleration, time, radius):
		if self.acceleration == 0:
			return self.velocity*radius
		elif self.velocity == 0:
			return (radius*self.acceleration*self.time)
		else:
			return (self.distance*radius)/self.time
	def get_Total_Energy(self, distance, velocity, acceleration, time, height, mass) -> list:
		if self.acceleration == 0 and self.velocity == 0:
			kineticEnergy = mass*(0.5)*math.pow((self.distance/self.time), 2)
		elif self.velocity != 0 and self.acceleration == 0:
			kineticEnergy = (0.5)*math.pow(self.velocity, 2)*mass
		else:
			kineticEnergy = mass*0.5*math.pow(self.acceleration*self.time, 2)
		potentialEnergy = mass*height*9.81
		totalEnergy = potentialEnergy+kineticEnergy
		return [potentialEnergy, kineticEnergy, totalEnergy]
	