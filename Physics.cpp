#include <iostream>
#include <math.h>


class Physics{
	private:
		float time, displacement, velocity, acceleration;
    public:
		Physics(float time, float displacement, float velocity, float acceleration){
			time = time;
			displacement = displacement;
			velocity = velocity;
			acceleration = acceleration;
		}
	float get_Time(){
		if (acceleration != 0 && displacement != 0){
			return sqrt(((2*displacement)/acceleration));
		}else if (velocity != 0 && displacement != 0){
			return displacement/velocity;
		}else{
			return time;
		}
	}
	float get_displacement(){
		
	}
};
