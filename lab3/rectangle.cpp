#include "rectangle.h"
#include <iostream>
#include <cmath>

using namespace std;

double rectangle::calcArea(){
//declare variable to make return statement look nicer
    double out;

//calculate and return area
    out = length * width;

    return out;
}

double rectangle::getLength(){
    return length;
}

double rectangle::getWidth(){
    return width;
}

bool rectangle::setLength(double l){
//check if length is less than 0. if it is, return false. otherwise, return true.
    if (l < 0) {
        return false;
    }

    else {
        length = l;
        return true;
    }
}

bool rectangle::setWidth(double w){
//check if width is less than 0. if it is, return false. otherwise, return true.
    if (w < 0) {
        return false;
    }

    else {
        width = w;
        return true;
    }
}