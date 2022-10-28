//
// Created by gboling on 10/14/2022.
//

#include "SportsCar.h"
#include <iostream>
using namespace std;

//defining SportsCar methods
SportsCar::SportsCar() {}
SportsCar::SportsCar(string mk, string md, string y, int nd, int nhp) {
    setMake(mk);
    setModel(md);
    setYear(y);
    setNumDoors(nd);
    setNumHorsePower(nhp);
}
void SportsCar::setMake(string mk) {
    make = mk;
}
void SportsCar::setModel(string md) {
    model = md;
}
void SportsCar::setYear(string y) {
    year = y;
}
bool SportsCar::setNumDoors(int nd) {
    if (nd < 1){
        numDoors = 1;
        return false;
    }

    else {
        numDoors = nd;
        return true;
    }
}
bool SportsCar::setNumHorsePower(int nhp) {
    if (nhp < 78){ //lowest horsepower in a modern car
        nhp = 78;
        return false;
    }

    else {
        numHorsePower = nhp;
        return true;
    }
}
string SportsCar::getMake() {
    return make;
}
string SportsCar::getModel() {
    return model;
}
string SportsCar::getYear() {
    return year;
}
int SportsCar::getNumDoors() {
    return numDoors;
}
int SportsCar::getNumHorsePower() {
    return numHorsePower;
}

void SportsCar::printInfo() {
    cout << "Make: " << make << endl
         << "Model: " << model << endl
         << "Year: " << year << endl
         << "Number of doors: " << numDoors << endl
         << "Horsepower: " << numHorsePower << endl;
}
//end defining SportsCar class methods