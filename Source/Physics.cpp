#include <tgmath.h>
#include <iostream>
#include <stdio.h>
#include "Dependency/kinematiclib.h"
using namespace std;
int Value_Error = 0;
float get_time(float time, float displacement, float velocity, float acceleration){
	if (time != 0){
		return time;
	}else if (acceleration != 0 && displacement != 0){
		return sqrt(((2*displacement)/acceleration));
	}else if (velocity != 0 && displacement != 0){
		return displacement/velocity;
	}else{
		throw Value_Error;
	}
}
float get_displacement(float time, float displacement, float velocity, float acceleration){
	if (displacement != 0){
		return displacement;
	}else if (acceleration != 0 || velocity !=0){
		return (velocity*time+(0.5*(acceleration*time*time)));
	}else{
		throw Value_Error;
	}
}
float get_velocity(float time, float displacement, float velocity, float acceleration){
	if (velocity != 0){
		return velocity;
	}else if (time != 0){
			return ((displacement/time)+(acceleration * time));
		}else{
			throw Value_Error;
		}
	}
	float get_acceleration(float time, float displacement, float velocity, float acceleration){
		if (acceleration !=0){
			return acceleration;
		}else if (velocity != 0 && time != 0){
			return velocity/time;
		}else if (displacement != 0 && time != 0){
			return (displacement/(time * time));
		}
		else{
			throw Value_Error;
		}
	}
int main(){
	printf("-----------------------------------------------------------------\n");
	float ptime = request_time();
	printf("-----------------------------------------------------------------\n");
	float displacement = request_displacement();
	printf("-----------------------------------------------------------------\n");
	float velocity = request_velocity();
	printf("-----------------------------------------------------------------\n");
	float acceleration = request_acceleration();
	printf("-----------------------------------------------------------------\n");
	float* ptrTime = &ptime;
	float* ptrDisp = &displacement;
	float* ptrVel = &velocity;
	float* ptrAcc = &acceleration;
	string wtfDoYouWant;
	std::cout << "Are you calculating for acceleration, velocity, displacement, or time?\n";
	std::cin >> wtfDoYouWant;
	if (wtfDoYouWant == "time"){
		float time = get_time(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("t = %f\n", time);
		}catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}
	}else if (wtfDoYouWant == "displacement"){
		float displacement = get_displacement(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("d = %f\n", displacement);
		}catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}
	}else if (wtfDoYouWant == "velocity"){
		float velocity = get_velocity(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("v = %f\n", velocity);
		}catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}
	}else if (wtfDoYouWant == "acceleration"){
		float acceleration = get_acceleration(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("a = %f\n", acceleration);
		}catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}
	}
	printf("-----------------------------------------------------------------\n");
};