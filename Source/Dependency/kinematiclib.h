#include <stdio.h>
//Struct for displacement input
struct Displacement{
    float disp;
}
newDisplacement;
//Function of the struct for displacement 
float* request_displacement(){
    printf("Enter the change in displacement (if unknown enter 0): ");
    scanf("%f", &newDisplacement.disp);
	printf("\n");
    return &newDisplacement.disp;
}
//Struct for velocity input
struct Velocity{
    float vel;
}
newVelocity;
//Function of the struct for velocity 
float* request_velocity(){
    printf("Enter the change in velocity (if unknown enter 0): ");
    scanf("%f", &newVelocity.vel);
	printf("\n");
    return &newVelocity.vel;
}
//Struct for displacement input
struct Acceleration{
    float acc;
}
newAcceleration;
//Function of the struct for acceleration 
float* request_acceleration(){
    printf("Enter the change in acceleration (if unknown enter 0): ");
    scanf("%f", &newAcceleration.acc);
	printf("\n");
    return &newAcceleration.acc;
}
//Struct for time input
struct time{
    float ptime;
}
newTime;
//Function of the struct for time 
float* request_time(){
    printf("Enter the change in time (if unknown enter 0): ");
    scanf("%f", &newTime.ptime);
	printf("\n");
    return &newTime.ptime;
}
