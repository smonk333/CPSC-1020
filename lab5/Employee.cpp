//
// Created by gboling on 10/14/2022.
//

#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
    firstName = "";
    lastName = "";
    address = "";
    email = "";
    college = "";
    administration = "";
}
Employee::Employee(std::string fn, std::string ln, std::string a, std::string e, std::string c, std::string ad) {
    setFirst(fn);
    setLast(ln);
    setAddress(a);
    setEmail(e);
    setCollege(c);
    setAdmin(ad);
}

void Employee::setFirst(std::string fn) {
    firstName = fn;
}

void Employee::setLast(std::string ln) {
    lastName = ln;
}

void Employee::setAddress(std::string a) {
    address = a;
}
void Employee::setEmail(std::string e) {
    email = e;
}
void Employee::setCollege(std::string c) {
    college = c;
}
void Employee::setAdmin(std::string ad) {
    administration = ad;
}

string Employee::getFirst() {
    return firstName;
}

string Employee::getLast() {
    return lastName;
}

string Employee::getAddress() {
    return address;
}

string Employee::getEmail() {
    return email;
}
string Employee::getCollege() {
    return college;
}
string Employee::getAdmin() {
    return administration;
}
void Employee::printInfo() {
    cout << "Name: " << firstName << " " << lastName << endl
         << "Address: " << address << endl
         << "Email: " << email << endl
         << "College: " << college << endl
         << "Administration: " << administration << endl;
}