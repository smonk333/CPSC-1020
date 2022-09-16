#include "calcTotalCharges.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calcTotalCharges(int daysIn, float roomRate, float labFees, float medicationCharge){

//making a variable to return the results of the calculation at the end
    float output;

//calculating...
    output = (daysIn * roomRate) + labFees + medicationCharge;

//returning results
    return output;
}

float calcTotalCharges(float labFees, float medicationCharge){

//making a variable to return the results of the calculation at the end
    float output;

//calculating...
    output = labFees + medicationCharge;

//returning results
    return output;
}