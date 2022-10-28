//
// Created by gboling on 10/14/2022.
//

#ifndef CPSC_1020_MOTORCYCLE_H
#define CPSC_1020_MOTORCYCLE_H
#include <string>
using namespace std;

class Motorcycle {
    private:
        string make;
        string model;
        string year;
        string cylinder;
        string color;

    public:
        Motorcycle();
        Motorcycle(string mk, string md, string y, string cy, string cr);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        void setCylinder(string cy);
        void setColor(string cr);
        string getMake();
        string getModel();
        string getYear();
        string getEngine();
        string getColor();
        string getCylinder();
        void printInfo();
};


#endif //CPSC_1020_MOTORCYCLE_H
