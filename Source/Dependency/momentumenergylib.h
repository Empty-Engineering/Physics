#include <stdio.h>
#include "kinematiccalc.h"
using namespace std;
std::exception Value_Error;
float get_momentum(float mass, float velocity){
    return velocity*mass;
}

float get_linear_energy(float velocity, float mass){
    return (0.5)*(mass)*(velocity*velocity);
}

float get_mass(float velocity, float momentum, float energy){
    if (velocity != 0){
        if (momentum != 0){
            return momentum/velocity;
        }else if (energy != 0){
            return (2*energy)/(velocity*velocity);
        }
    }
    else{
        throw Value_Error;
    }
}
float get_P_velocity(float mass, float momentum, float energy){
    
}