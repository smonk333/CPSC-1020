//
// Created by gboling on 10/14/2022.
//

#include "Truck.h"
#include <iostream>
using namespace std;

//defining truck methods
Truck::Truck() {
    make = "";
    model = "";
    year = "";
    mpg = 0.0;
    transmission = "";
}

Truck::Truck(string mk, string md, string y, double mg, string tn) {
    setMake(mk);
    setModel(md);
    setYear(y);
    setMPG(mg);
    setTransmission(tn);
}
void Truck::setMake(string mk) {
    make = mk;
}
void Truck::setModel(string md) {
    model = md;
}
void Truck::setYear(string y) {
    year = y;
}
bool Truck::setMPG(double mg) {
    if (mg < 0){
        mpg = 0;
        return false;
    }

    else {
        mpg = mg;
        return true;
    }
}
void Truck::setTransmission(string tn) {
    transmission = tn;
}
string Truck::getMake() {
    return make;
}
string Truck::getModel() {
    return model;
}
string Truck::getYear() {
    return year;
}
double Truck::getMPG() {
    return mpg;
}
string Truck::getTransmission() {
    return transmission;
}

void Truck::printInfo() {
    cout << "Make: " << make << endl
         << "Model: " << model << endl
         << "Year: " << year << endl
         << "MPG: " << mpg << endl
         << "Transmission: " << transmission << endl;
}
//end defining truck class methods