//Lukas Robin
//30.08.2021
//v1.6
#include <tgmath.h>
#include <iostream>
#include <stdio.h>
#include "Dependency/kinematiclib.h"
#include "Dependency/kinematiccalc.h"
#include "Dependency/stylesheet.h"

//Boilerplate
using namespace std;
//Main function
int main(){
//Make her look pretty in the menus
//Call on request for values
	DASHED_LINE();
	float* ptrTime = request_time();
	DASHED_LINE();
	float* ptrDisp = request_displacement();
	DASHED_LINE();
	float* ptrVel = request_velocity();
	DASHED_LINE();
	float* ptrAcc = request_acceleration();
	DASHED_LINE();
//Ask what the user wants to calculate
	string wtfDoYouWant;
	std::cout << "Are you calculating for acceleration, velocity, displacement, or time?\n";
	std::cin >> wtfDoYouWant;
//Calculate the change in time called from dereferenced pointer

	if (wtfDoYouWant == "time"){
		float time = get_time(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("t = %f\n", time);
		}
		//Catch exception if the value returns as NaN
		catch (exception Value_Error){
			std::cout << "Value error, please try again. \n";
		}

//Calculate the change in displacement called from dereferenced pointer

	}else if (wtfDoYouWant == "displacement"){
		float displacement = get_displacement(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("d = %f\n", displacement);
		}
		//Catch exception if the value returns as NaN
		catch (exception Value_Error){
			std::cout << "Value error, please try again. \n";
		}

//Calculate the change in velocity called from dereferenced pointer

	}else if (wtfDoYouWant == "velocity"){
		float velocity = get_velocity(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("v = %f\n", velocity);
		}
		//Catch exception if the value returns as NaN
		catch (exception Value_Error){
			std::cout << "Value error, please try again. \n";
		}

//Calculate the change in acceleration called from dereferenced pointer

	}else if (wtfDoYouWant == "acceleration"){
		float acceleration = get_acceleration(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("a = %f\n", acceleration);
		}
		//Catch exception if the value returns as NaN
		catch (exception Value_Error){
			std::cout << "Value error, please try again. \n";
		}
	}
//End with line
	DASHED_LINE();
}
