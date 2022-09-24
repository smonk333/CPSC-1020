#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

double Circle::calcArea(){
//declare a variable to store the output of the calculation, for a nicer looking return statement.
    double out;
//calculate and return the area of the Circle, given the radius of the Circle.
    out = M_PI * (pow(radius, 2));
    
    return out;
}

double Circle::getRadius(){
//return the value of the radius variable, declared in the private scope of the class
    return radius;
}


bool Circle::setRadius(double r){
//check to see if the radius is negative. if yes, return false. if no, return true.
    if (r < 0) {
        return false;
    }

    else {
        radius = r;
        return true;
    }
}