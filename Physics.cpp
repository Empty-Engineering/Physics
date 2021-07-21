#include <tgmath.h>
class Kinematics{
	private:
		float time, displacement, velocity, acceleration;
    public:
		Kinematics(float time, float displacement, float velocity, float acceleration){
			time = time;
			displacement = displacement;
			velocity = velocity;
			acceleration = acceleration;
		}
	float get_time(){
		if (acceleration != 0 && displacement != 0){
			return sqrt(((2*displacement)/acceleration));
		}else if (velocity != 0 && displacement != 0){
			return displacement/velocity;
		}else{
			return time;
		}
	}
	float get_displacement(){
		if (acceleration != 0 || velocity !=0){
			return (velocity*time+(0.5*(acceleration*time*time)));
		}else{
			return displacement;
		}
	}
	float get_velocity(){
		if (time != 0){
			return (displacement/time)+(acceleration*time);
		}else{
			return velocity;
		}
	}
	float get_acceleration(){
		if (velocity != 0 && time != 0){
			return velocity/time;
		}else if (displacement != 0 && time != 0){
			return displacement/(time*time);
		}else{
			return acceleration;
		}
	}
};
int main(){
	return 0;
}
