#include <tgmath.h>
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

std::vector<float *> init(){
	float ptime;
	float displacement;
	float velocity;
	float acceleration;
	std::cout << "Enter the change in time: ";
	std::cin >> ptime;
	std::cout << "\n";
	std::cout << "Enter the change in displacement: ";
	std::cin >> displacement;
	std::cout << "\n";
	std::cout << "Enter the velocity or its change: ";
	std::cin >> velocity;
	std::cout << "\n";
	std::cout << "Enter the acceleration or its change: ";
	std::cin >> acceleration;
	std::cout << "\n";
	float* ptrTime = &ptime;
	float* ptrDisp = &displacement;
	float* ptrVel = &velocity;
	float* ptrAcc = &acceleration;
	std::vector<float *> pointerArray = {ptrTime, ptrDisp, ptrVel, ptrAcc};
	return pointerArray;
}
	float get_time(float time, float displacement, float velocity, float acceleration){
		if (acceleration != 0 && displacement != 0){
			return sqrt(((2*displacement)/acceleration));
		}else if (velocity != 0 && displacement != 0){
			return displacement/velocity;
		}else{
			return time;
		}
	}
	float get_displacement(float time, float displacement, float velocity, float acceleration){
		if (acceleration != 0 || velocity !=0){
			return (velocity*time+(0.5*(acceleration*time*time)));
		}else{
			return displacement;
		}
	}
	float get_velocity(float time, float displacement, float velocity, float acceleration){
		if (time != 0){
			return (displacement/time)+(acceleration*time);
		}else{
			return velocity;
		}
	}
	float get_acceleration(float time, float displacement, float velocity, float acceleration){
		if (velocity != 0 && time != 0){
			return velocity/time;
		}else if (displacement != 0 && time != 0){
			return displacement/(time*time);
		}else{
			return acceleration;
		}
	}

int main(){
	std::vector<float *> pointerArray = init();
	float* ptrTime = pointerArray[0];
	float* ptrDisplacement = pointerArray[1];
	float* ptrVelocity = pointerArray[2];
	float* ptrAcceleration = pointerArray[3];
	string wtfDoYouWant;
	std::cout << "Are you calculating for acceleration, velocity, displacement, or time?\n";
	std::cin >> wtfDoYouWant;
	if (wtfDoYouWant == "time"){
		float time = get_time(*ptrTime, *ptrDisplacement, *ptrVelocity, *ptrAcceleration);
		std::cout << time;
	}else if (wtfDoYouWant == "displacement"){
		float displacement = get_displacement(*ptrTime, *ptrDisplacement, *ptrVelocity, *ptrAcceleration);
		
	}else if (wtfDoYouWant == "velocity"){
		float velocity = get_velocity(*ptrTime, *ptrDisplacement, *ptrVelocity, *ptrAcceleration);
		
	}else if (wtfDoYouWant == "acceleration"){
		float acceleration = get_acceleration(*ptrTime, *ptrDisplacement, *ptrVelocity, *ptrAcceleration);
		
	}
}
