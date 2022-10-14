#include "Vehicle.h"
#include <iostream>
using namespace std;

//defining motorcycle class methods
Motorcycle::Motorcycle() {}
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
		<< "Cyclinder: " << cylinder << endl
		<< "Color: " << color << endl;
}
//end defining motorcycle class methods

//defining truck methods
Truck::Truck() {}
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

//defining Sportscar methods
Sportscar::Sportscar() {}
Sportscar::Sportscar(string mk, string md, string y, int nd, int nhp) {
	setMake(mk);
	setModel(md);
	setYear(y);
	setNumDoors(nd);
	setNumHorsePower(nhp);
}
void Sportscar::setMake(string mk) {
	make = mk;
}
void Sportscar::setModel(string md) {
	model = md;
}
void Sportscar::setYear(string y) {
	year = y;
}
bool Sportscar::setNumDoors(int nd) {
	if (nd < 1){
        numDoors = 1;
        return false;
    }

    else {
        numDoors = nd;
        return true;
    }
}
bool Sportscar::setNumHorsePower(int nhp) {
	if (nhp < 78){ //lowest horsepower in a modern car
        nhp = 78;
        return false;
    }

    else {
        numHorsePower = nhp;
        return true;
    }
}
string Sportscar::getMake() {
	return make;
}
string Sportscar::getModel() {
	return model;
}
string Sportscar::getYear() {
	return year;
}
int Sportscar::getNumDoors() {
	return numDoors;
}
int Sportscar::getNumHorsePower() {
	return numHorsePower;
}

void Sportscar::printInfo() {
	cout << "Make: " << make << endl
		<< "Model: " << model << endl
		<< "Year: " << year << endl
		<< "Number of doors: " << numDoors << endl
		<< "Horsepower: " << numHorsePower << endl;
}
//end defining Sportscar class methods

//defining Sedan methods
Sedan::Sedan() {}
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