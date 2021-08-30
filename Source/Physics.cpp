//Lukas Robin
//30.08.2021
//v1.0-beta


#include <tgmath.h>
#include <iostream>
#include <stdio.h>

//Boilerplate

using namespace std;

//Exception to help mitigate NaN return values

int Value_Error = 0;

//Module to calculate time

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


//Struct for displacement input
struct Displacement{
    float disp;
}

newDisplacement;

//Function of the struct for displacement 

float request_displacement(){
    printf("Enter the change in displacement: ");
	float displacement = scanf("%f", &(newDisplacement.disp));
	printf("\n");
    return displacement;
}

//Struct for velocity input
struct Velocity{
    float vel;
}

newVelocity;

//Function of the struct for velocity 

float request_velocity(){
    printf("Enter the change in velocity: ");
	float velocity = scanf("%f", &(newVelocity.vel));
	printf("\n");
    return velocity;
}

//Struct for displacement input
struct Acceleration{
    float acc;
}

newAcceleration;

//Function of the struct for acceleration 

float request_acceleration(){
    printf("Enter the change in acceleration: ");
	float acceleration = scanf("%f", &(newAcceleration.acc));
	printf("\n");
    return acceleration;
}

//Struct for time input
struct time{
    float ptime;
}

newTime;

//Function of the struct for time 

float request_time(){
    printf("Enter the change in time: ");
	float ptime = scanf("%f", &(newTime.ptime));
	printf("\n");
    return ptime;
}

//Main function

int main(){

//Make her look pretty in the menus
//Call on request for values
	printf("-----------------------------------------------------------------\n");
	float ptime = request_time();
	printf("-----------------------------------------------------------------\n");
	float displacement = request_displacement();
	printf("-----------------------------------------------------------------\n");
	float velocity = request_velocity();
	printf("-----------------------------------------------------------------\n");
	float acceleration = request_acceleration();
	printf("-----------------------------------------------------------------\n");

//Create pointers for the values

	float* ptrTime = &ptime;
	float* ptrDisp = &displacement;
	float* ptrVel = &velocity;
	float* ptrAcc = &acceleration;

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
		catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}

//Calculate the change in displacement called from dereferenced pointer

	}else if (wtfDoYouWant == "displacement"){
		float displacement = get_displacement(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("d = %f\n", displacement);
		}
		//Catch exception if the value returns as NaN
		catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}

//Calculate the change in velocity called from dereferenced pointer

	}else if (wtfDoYouWant == "velocity"){
		float velocity = get_velocity(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("v = %f\n", velocity);
		}
		//Catch exception if the value returns as NaN
		catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}

//Calculate the change in acceleration called from dereferenced pointer

	}else if (wtfDoYouWant == "acceleration"){
		float acceleration = get_acceleration(*ptrTime, *ptrDisp, *ptrVel, *ptrAcc);
		try{
		printf("a = %f\n", acceleration);
		}
		//Catch exception if the value returns as NaN
		catch (int Value_Error){
			std::cout << "Value error, please try again. \n";
		}
	}

//End with line

	printf("-----------------------------------------------------------------\n");
};