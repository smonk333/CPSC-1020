/*
 * Name: Stephen Samuelson
 * Desc: Header for class Student
 * Date: 10/10/2022
 */

#ifndef CPSC1021LAB5_STUDENT_H
#define CPSC1021LAB5_STUDENT_H

#include <string>
using namespace std;

class Student {

//Private member variables for Student creation.
private:
    string firstName, lastName, address, email, graduationDate;
    bool enrollmentStatus;

//Public functions for Student creation.
public:

    //Default constructor
    Student(){
        firstName = "";
        lastName = "";
        address = "";
        email = "";
        graduationDate = "";
        enrollmentStatus = false;
    }

    //Overloaded constructor. Parameters are abbreviations for private variables.
    Student(string fn, string ln, string a, string e, string gd, bool es) {
        firstName = fn;
        lastName = ln;
        address = a;
        email = e;
        graduationDate = gd;
        enrollmentStatus = es;
    }

    //Public setter functions
    void setFirstName(string);
    void setLastName(string);
    void setAddress(string);
    void setEmail(string);
    void setGraduationDate(string);
    void setEnrollmentStatus(bool);

    //Public getter functions
    string getFirstName();
    string getLastName();
    string getAddress();
    string getEmail();
    string getGraduationDate();
    bool getEnrollmentStatus();
    void printInfo();
};


#endif //CPSC1021LAB5_STUDENT_H
