/*
 * Name: Stephen Samuelson
 * Desc: Student and Sports car classes for CPSC 1021 Lab 5
 * Date: 10/10/2022
 * Time: 1 hour
 */

#include "Student.h"
#include <iostream>
using namespace std;

//Setter functions
void Student::setFirstName(string fn) {
    firstName = fn;
}

void Student::setLastName(string ln) {
    lastName = ln;
}

void Student::setAddress(string a) {
    address = a;
}

void Student::setEmail(string e) {
    email = e;
}

void Student::setGraduationDate(string gd) {
    graduationDate = gd;
}

void Student::setEnrollmentStatus(bool es) {
    enrollmentStatus = es;
}

//Getter functions
string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getAddress() {
    return address;
}

string Student::getEmail() {
    return email;
}

string Student::getGraduationDate() {
    return graduationDate;
}

bool Student::getEnrollmentStatus() {
    return enrollmentStatus;
}

void Student::printInfo() {
    cout << "Name: " << firstName << " " << lastName << endl
         << "Address: " << address << endl
         << "Email: " << email << endl
         << "Graduation Date: " << graduationDate << endl
         << "Enrollment status: " << enrollmentStatus << endl;
}