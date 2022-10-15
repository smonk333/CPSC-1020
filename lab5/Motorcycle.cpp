//
// Created by gboling on 10/14/2022.
//

#include "Motorcycle.h"
#include <iostream>

//defining motorcycle class methods
Motorcycle::Motorcycle() {
    make = "";
    model = "";
    year = "";
    cylinder = "";
    color = "";
}

Motorcycle::Motorcycle(string mk, string md, string y, string cy, string cr) {
    setMake(mk);
    setModel(md);
    setYear(y);
    setCylinder(cy);
    setColor(cr);
}
void Motorcycle::setMake(string mk) {
    make = mk;
}
void Motorcycle::setModel(string md) {
    model = md;
}
void Motorcycle::setYear(string y) {
    year = y;
}
void Motorcycle::setCylinder(string cy) {
    cylinder = cy;
}
void Motorcycle::setColor(string cr) {
    color = cr;
}
string Motorcycle::getMake() {
    return make;
}
string Motorcycle::getModel() {
    return model;
}
string Motorcycle::getYear() {
    return year;
}
string Motorcycle::getCylinder() {
    return cylinder;
}
string Motorcycle::getColor() {
    return color;
}

void Motorcycle::printInfo() {
    cout << "Make: " << make << endl
         << "Model: " << model << endl
         << "Year: " << year << endl
         << "Cylinder: " << cylinder << endl
         << "Color: " << color << endl;
}
//end defining motorcycle class methods