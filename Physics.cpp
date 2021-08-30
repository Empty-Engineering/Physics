#include <tgmath.h>
#include <iostream>
#include </Users/lukasrobin/Desktop/Physics/kinematiclib.h>
using namespace std;
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
	float ptime = request_time();
	float displacement = request_displacement();
	float velocity = request_velocity();
	float acceleration = request_acceleration();
	float* ptrTime = &ptime;
	float* ptrDisp = &displacement;
	float* ptrVel = &velocity;
	float* ptrAcc = &acceleration;
	string wtfDoYouWant;
	std::cout << "Are you calculating for acceleration, velocity, displacement, or time?\n";
	std::cin >> wtfDoYouWant;
	if (wtfDoYouWant == "time"){
		float time = get_time(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		printf("t = %f\n", time);
	}else if (wtfDoYouWant == "displacement"){
		float displacement = get_displacement(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		printf("d = %f\n", displacement);
	}else if (wtfDoYouWant == "velocity"){
		float velocity = get_velocity(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		printf("v = %f\n", velocity);
	}else if (wtfDoYouWant == "acceleration"){
		float acceleration = get_acceleration(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		printf("a = %f\n", acceleration);
	}
}