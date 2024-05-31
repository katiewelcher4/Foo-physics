//Sphere.cpp
#include "Sphere.hpp"

//Constructor
Sphere::Sphere(){
    // do nothing
}

float Sphere::getVolume(float inputRadius)
{
    float volume = (4 * 3.14 * inputRadius) / 3;
    return volume;
}