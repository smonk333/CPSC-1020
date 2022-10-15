//
// Created by gboling on 10/14/2022.
//

#ifndef CPSC_1020_COMMUTER_H
#define CPSC_1020_COMMUTER_H
#include <iostream>
using namespace std;

class Commuter{ //Karina
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string distance;
        string phone;

    public:
        Commuter();
        Commuter(string fn, string ln, string a, string e, string d, string p);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        void setDistance(string d);
        void setPhone(string p);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        string getDistance();
        string getPhone();
        void printInfo();
};

#endif //CPSC_1020_COMMUTER_H
