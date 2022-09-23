#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;

double circle::calcArea(){
//declare a variable to store the output of the calculation, for a nicer looking return statement.
    double out;
//calculate and return the area of the circle, given the radius of the circle.
    out = M_PI * (pow(radius, 2));
    
    return out;
}

double circle::getRadius(){
//return the value of the radius variable, declared in the private scope of the class
    return radius;
}


bool circle::setRadius(double r){
//check to see if the radius is negative. if yes, return false. if no, return true.
    if (r < 0) {
        return false;
    }

    else {
        radius = r;
        return true;
    }
}