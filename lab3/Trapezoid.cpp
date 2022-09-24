#include "Trapezoid.h"
#include <iostream>
#include <cmath>

using namespace std;

double Trapezoid::calcArea(){
//create variable to hold output for cleaner return statement
    double out;
//calculate area and return the total
    out = ((base1 + base2) / 2) * height;
    return out;
}

double Trapezoid::getBase1(){
    return base1;
}

double Trapezoid::getBase2(){
    return base2;
}

double Trapezoid::getHeight(){
    return height;
}

bool Trapezoid::setBase1(double b1){
//check to see if input is less than 0. if yes, return false. if no, set the corresponding private variable to the input and return true.
    if (b1 < 0) {
        return false;
    }

    else {
        base1 = b1;
        return true;
    }
}

bool Trapezoid::setBase2(double b2){
//check to see if input is less than 0. if yes, return false. if no, set the corresponding private variable to the input and return true.
    if (b2 < 0) {
        return false;
    }

    else {
        base2 = b2;
        return true;
    }
}

bool Trapezoid::setHeight(double h){
//check to see if input is less than 0. if yes, return false. if no, set the corresponding private variable to the input and return true.
    if (h < 0) {
        return false;
    }

    else {
        height = h;
        return true;
    }
}