//
// Created by gboling on 10/14/2022.
//

#ifndef CPSC_1020_EMPLOYEE_H
#define CPSC_1020_EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee{ //Colton
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string college;
        string administration;

    public:
        Employee();
        Employee(string fn, string ln, string a, string e, string c, string ad);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        void setCollege(string c);
        void setAdmin(string ad);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        string getCollege();
        string getAdmin();
        void printInfo();
};


#endif //CPSC_1020_EMPLOYEE_H
