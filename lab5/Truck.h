//
// Created by gboling on 10/14/2022.
//

#ifndef CPSC_1020_TRUCK_H
#define CPSC_1020_TRUCK_H
#include <string>
using namespace std;

class Truck {
    private:
        string make;
        string model;
        string year;
        double mpg;
        string transmission;

    public:
        Truck();
        Truck(string mk, string md, string y, double mg, string tn);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        bool setMPG(double mg);
        void setTransmission(string tn);
        string getMake();
        string getModel();
        string getYear();
        double getMPG();
        string getTransmission();
        void printInfo();
};


#endif //CPSC_1020_TRUCK_H
