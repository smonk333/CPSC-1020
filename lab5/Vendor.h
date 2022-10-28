//
// Created by gboling on 10/14/2022.
//

#ifndef CPSC_1020_VENDOR_H
#define CPSC_1020_VENDOR_H
#include <iostream>
using namespace std;


class Vendor{ //Garrett
    private:
        string firstName;
        string lastName;
        string address;
        string email;
        string storeName;
        int yearsEmployed;

    public:
        Vendor();
        Vendor(string fn, string ln, string a, string e, string sn, int ye);
        void setFirst(string fn);
        void setLast(string ln);
        void setAddress(string a);
        void setEmail(string e);
        void setStoreName(string sn);
        bool setYearsEmployed(int ye);
        string getFirst();
        string getLast();
        string getAddress();
        string getEmail();
        string getStoreName();
        int getYearsEmployed();
        void printInfo();
};


#endif //CPSC_1020_VENDOR_H
