#include "trapezoid.h"
#include <iostream>
#include <cmath>

using namespace std;

double trapezoid::calcArea(){
//create variable to hold output for cleaner return statement
    double out;
//calculate area and return the total
    out = ((base1 + base2) / 2) * height;
    return out;
}

double trapezoid::getBase1(){
    return base1;
}

double trapezoid::getBase2(){
    return base2;
}

double trapezoid::getHeight(){
    return height;
}

bool trapezoid::setBase1(double b1){
//check to see if input is less than 0. if yes, return false. if no, set the corresponding private variable to the input and return true.
    if (b1 < 0) {
        return false;
    }

    else {
        base1 = b1;
        return true;
    }
}

bool trapezoid::setBase2(double b2){
//check to see if input is less than 0. if yes, return false. if no, set the corresponding private variable to the input and return true.
    if (b2 < 0) {
        return false;
    }

    else {
        base2 = b2;
        return true;
    }
}

bool trapezoid::setHeight(double h){
//check to see if input is less than 0. if yes, return false. if no, set the corresponding private variable to the input and return true.
    if (h < 0) {
        return false;
    }

    else {
        height = h;
        return true;
    }
}