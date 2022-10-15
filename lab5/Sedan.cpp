//
// Created by gboling on 10/14/2022.
//

#include "Sedan.h"
#include <iostream>
using namespace std;

//defining Sedan methods
Sedan::Sedan() {
    make = "";
    model = "";
    year = "";
    weight = 0;
    isElectric = false;
}

Sedan::Sedan(string mk, string md, string y, int wt, bool ie) {
    setMake(mk);
    setModel(md);
    setYear(y);
    setWeight(wt);
    setIsElectric(ie);
}
void Sedan::setMake(string mk) {
    make = mk;
}
void Sedan::setModel(string md) {
    model = md;
}
void Sedan::setYear(string y) {
    year = y;
}
bool Sedan::setWeight(int wt) {
    if (wt < 1){
        weight = 1;
        return false;
    }

    else {
        weight = wt;
        return true;
    }
}
bool Sedan::setIsElectric(bool ie) {
    if (ie != true && ie != false){
        isElectric = false;
        return false;
    }

    else {
        isElectric = ie;
        return true;
    }
}
string Sedan::getMake() {
    return make;
}
string Sedan::getModel() {
    return model;
}
string Sedan::getYear() {
    return year;
}
int Sedan::getWeight() {
    return weight;
}
bool Sedan::getIsElectric() {
    return isElectric;
}

void Sedan::printInfo() {
    cout << "Make: " << make << endl
         << "Model: " << model << endl
         << "Year: " << year << endl
         << "Weight: " << weight << endl
         << "Electric vehicle: " << isElectric << endl;
}
//end defining sedan class methods