//function definitions for class Patient
//Garrett Boling

#include <iostream>
#include <cmath>
#include "patient.h"

using namespace std;

Patient::Patient(){
    days = 0;
    rate = 0.0;
    services = 0.0;
    medicine = 0.0;
    patientType = 'I';
}

Patient::Patient(int d, double r, double s, double m, char t){
    days = d;
    rate = r;
    services = s;
    medicine = m;
    patientType = t;
}

double Patient::calcTotalCharges(){
    //declaring output variable to make output statement nicer
    double output;
    
    if (patientType == 'O'){
        output = (days * rate) + services + medicine;
    }

    else {
        output = services + medicine;
    }

    return output;

}

bool Patient::validateInput(double in){
//declare a boolean for returning the results of the check
    bool output;

//check to see if the input is greater than 0 (non-negative)
    if (in >= 0)
         output = true;
    else if (in < 0)
        output = false;
    
//return the results of the check
    return output;
}

bool Patient::validateInput(int in){
//declare a boolean for returning the results of the check
    bool output;

//check to see if the input is greater than 0 (non-negative)
    if (in >= 0)
         output = true;
    else if (in < 0)
        output = false;
    
//return the results of the check
    return output;
}

bool Patient::validateInput(char t){
    if (t != 'I' && t != 'O') {
        return false;
    }
    
    else {
        return true;
    }
}

bool Patient::setDays(int d){
    //check to see if the number entered by the user is valid, return results and set number based on whether or not it's valid
    if (validateInput(d) == false) {
        return false;
    }

    else {
        days = d;
        return true;
    }

}

bool Patient::setRate(double r){
    //check to see if the number entered by the user is valid, return results and set number based on whether or not it's valid
    if (validateInput(r) == false) {
        return false;
    }

    else {
        rate = r;
        return true;
    }

}

bool Patient::setServices(double s){
    //check to see if the number entered by the user is valid, return results and set number based on whether or not it's valid
    if (validateInput(s) == false) {
        return false;
    }

    else {
        services = s;
        return true;
    }

}

bool Patient::setMedication(double m){
    //check to see if the number entered by the user is valid, return results and set number based on whether or not it's valid
    if (validateInput(m) == false) {
        return false;
    }

    else {
        medicine = m;
        return true;
    }

}

bool Patient::setPatientType(char t){
    //check to see if the number entered by the user is valid, return results and set number based on whether or not it's valid
    if (validateInput(t) == false) {
        return false;
    }

    else {
        patientType = t;
        return true;
    }

}

//getter functions to return the values of the private variables

int Patient::getDays(){
    return days;
}

double Patient::getRate(){
    return rate;
}

double Patient::getServices(){
    return services;
}

double Patient::getMedication(){
    return medicine;
}

char Patient::getPatientType(){
    return patientType;
}