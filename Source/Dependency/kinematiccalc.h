#include <tgmath.h>
#include <stdio.h>
using namespace std;
std::exception Value_Error;
float get_time(float time, float displacement, float velocity, float acceleration){
	if (time != 0){
		return time;
	}else if (acceleration != 0 && displacement != 0){
		return sqrt(((2*displacement)/acceleration));
	}else if (velocity != 0 && displacement != 0){
		return displacement/velocity;
	}
	//Throw exception `Value_Error` if the value returns as NaN
	else{
		throw Value_Error;
	}
}
//Module to calculate displacement
float get_displacement(float time, float displacement, float velocity, float acceleration){
	if (displacement != 0){
		return displacement;
	}else if (acceleration != 0 || velocity !=0){
		return (velocity*time+(0.5*(acceleration*time*time)));
	}
	//Throw exception `Value_Error` if the value returns as NaN
	else{
		throw Value_Error;
	}
}
//Module to calculate velocity
float get_velocity(float time, float displacement, float velocity, float acceleration){
	if (velocity != 0){
		return velocity;
	}else if (time != 0){
			return ((displacement/time)+(acceleration * time));
		}
		//Throw exception `Value_Error` if the value returns as NaN
		else{
			throw Value_Error;
		}
	}
//Module to calculate acceleration
float get_acceleration(float time, float displacement, float velocity, float acceleration){
	if (acceleration !=0){
		return acceleration;
	}else if (velocity != 0 && time != 0){
		return velocity/time;
	}else if (displacement != 0 && time != 0){
		return (displacement/(time * time));
	}
	//Throw exception `Value_Error` if the value returns as NaN
	else{
		throw Value_Error;
	}
}
