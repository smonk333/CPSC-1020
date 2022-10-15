//
// Created by gboling on 10/14/2022.
//

#ifndef CPSC_1020_SEDAN_H
#define CPSC_1020_SEDAN_H
#include <string>
using namespace std;
class Sedan {
    private:
        string make;
        string model;
        string year;
        int weight;
        bool isElectric;

    public:
        Sedan();
        Sedan(string mk, string md, string y, int wt, bool ie);
        void setMake(string mk);
        void setModel(string md);
        void setYear(string y);
        bool setWeight(int wt);
        bool setIsElectric(bool ie);
        string getMake();
        string getModel();
        string getYear();
        int getWeight();
        bool getIsElectric();
        void printInfo();
    };

#endif //CPSC_1020_SEDAN_H
