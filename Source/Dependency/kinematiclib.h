#include <stdio.h>
struct Displacement{
    float disp;
}
newDisplacement;
float request_displacement(){
    printf("Enter the change in displacement: ");
	float displacement = scanf("%f", &(newDisplacement.disp));
	printf("\n");
    return displacement;
}
struct Velocity{
    float vel;
}
newVelocity;
float request_velocity(){
    printf("Enter the change in velocity: ");
	float velocity = scanf("%f", &(newVelocity.vel));
	printf("\n");
    return velocity;
}
struct Acceleration{
    float acc;
}
newAcceleration;
float request_acceleration(){
    printf("Enter the change in acceleration: ");
	float acceleration = scanf("%f", &(newAcceleration.acc));
	printf("\n");
    return acceleration;
}
struct time{
    float ptime;
}
newTime;
float request_time(){
    printf("Enter the change in time: ");
	float ptime = scanf("%f", &(newTime.ptime));
	printf("\n");
    return ptime;
}