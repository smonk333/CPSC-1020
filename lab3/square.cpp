#include "Square.h"
#include <iostream>
#include <cmath>

using namespace std;

double square::calcArea(){
//create variable to hold calculation results for cleaner return statement
    double out;
//calculate and return area
    out = pow(side, 2);
    return out;
}

double square::getSide(){
    return side;
}

bool square::setSide(double s){
//check if s is less than 0. if yes, return false. if no, set private variable side to s and return true
    if (s < 0) {
        return false;
    }

    else {
        side = s;
        return true;
    }
}

