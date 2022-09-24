#include "Square.h"
#include <iostream>
#include <cmath>

using namespace std;

double Square::calcArea(){
//create variable to hold calculation results for cleaner return statement
    double out;
//calculate and return area
    out = pow(side, 2);
    return out;
}

double Square::getSide(){
    return side;
}

bool Square::setSide(double s){
//check if s is less than 0. if yes, return false. if no, set private variable side to s and return true
    if (s < 0) {
        return false;
    }

    else {
        side = s;
        return true;
    }
}

