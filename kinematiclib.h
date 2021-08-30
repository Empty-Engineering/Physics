#include <stdio.h>
struct Acceleration{
    float acc;
}
newAcceleration;
float request_acceleration(){
    
    printf("Enter the change in acceleration: ");
	float acceleration = scanf("%f", &(newAcceleration.acc));
	printf("\n");
    return acceleration;
};
    

struct time{
    float ptime;
}
newTime;
float request_time(){
    
    printf("Enter the change in time: ");
	float ptime = scanf("%f", &(newTime.ptime));
	printf("\n");
    return ptime;
};


int main(){


    return 0
};