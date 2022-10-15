//
// Created by gboling on 10/14/2022.
//

#include "Vendor.h"
#include <string>
using namespace std;

Vendor::Vendor() {
    firstName = "";
    lastName = "";
    address = "";
    email = "";
    storeName = "";
    yearsEmployed = 0;
}

Vendor::Vendor(string fn, string ln, string a, string e, string sn, int ye) {
    setFirst(fn);
    setLast(ln);
    setAddress(a);
    setEmail(e);
    setStoreName(sn);
    setYearsEmployed(ye);
}

void Vendor::setFirst(string fn) {
    firstName = fn;
}

void Vendor::setLast(string ln) {
    lastName = ln;
}

void Vendor::setAddress(string a) {
    address = a;
}

void Vendor::setEmail(string e) {
    email = e;
}

void Vendor::setStoreName(string sn) {
    storeName = sn;
}

bool Vendor::setYearsEmployed(int ye) {
    if (ye < 0){
        yearsEmployed = 0;
        return false;
    }
    else {
        yearsEmployed = ye;
        return true;
    }
}

string Vendor::getFirst() {
    return firstName;
}

string Vendor::getLast() {
    return lastName;
}

string Vendor::getAddress() {
    return address;
}

string Vendor::getEmail() {
    return email;
}

string Vendor::getStoreName() {
    return storeName;
}

int Vendor::getYearsEmployed() {
    return yearsEmployed;
}

void Vendor::printInfo() {
    cout << "Name: " << firstName << " " << lastName << endl
         << "Address: " << address << endl
         << "Email: " << email << endl
         << "Store Name: " << storeName << endl
         << "Years Employed: " << yearsEmployed << endl;
}