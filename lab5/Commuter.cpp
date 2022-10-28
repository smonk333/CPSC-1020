//
// Created by gboling on 10/14/2022.
//

#include "Commuter.h"
#include <string>
#include <iostream>
using namespace std;

Commuter::Commuter() {
    firstName = "";
    lastName = "";
    address = "";
    email = "";
    distance = "";
    phone = "";
}

Commuter::Commuter(string fn, string ln, string a, string e, string d, string p) {
    setFirst(fn);
    setLast(ln);
    setAddress(a);
    setEmail(e);
    setDistance(d);
    setPhone(p);
}

void Commuter::setFirst(string fn) {
    firstName = fn;
}

void Commuter::setLast(string ln) {
    lastName = ln;
}

void Commuter::setAddress(string a) {
    address = a;
}

void Commuter::setEmail(string e) {
    email = e;
}

void Commuter::setDistance(string d) {
    distance = d;
}

void Commuter::setPhone(string p) {
    phone = p;
}

string Commuter::getFirst() {
    return firstName;
}

string Commuter::getLast() {
    return lastName;
}

string Commuter::getAddress() {
    return address;
}

string Commuter::getEmail() {
    return email;
}

string Commuter::getDistance() {
    return distance;
}

string Commuter::getPhone() {
    return phone;
}

void Commuter::printInfo() {
    cout << "Name: " << firstName << " " << lastName << endl
         << "Address: " << address << endl
         << "Email: " << email << endl
         << "Distance: " << distance << endl
         << "Emergency Phone: " << phone << endl;
}