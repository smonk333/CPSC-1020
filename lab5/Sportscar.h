/*
 * Name: Stephen Samuelson
 * Desc: Header for SportsCar class
 * Date: 10/10/2022
 */

#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include <string>
using namespace std;

class SportsCar {

//Private member variables for SportsCar creation.
private:
    string make, model, year;
    int numDoors, numHorsePower;

//Public functions for SportsCar creation.
public:

    //Default Constructor
    SportsCar();

    //Overloaded constructor. Parameters are abbreviations for private variables.
    SportsCar(string ma, string mo, string y, int nd, int nhp);

    //Public setter functions
    void setMake(string ma);
    void setModel(string mo);
    void setYear(string y);
    bool setNumDoors(int nd);
    bool setNumHorsePower(int nhp);

    //Public getter functions
    string getMake();
    string getModel();
    string getYear();
    int getNumDoors();
    int getNumHorsePower();
    void printInfo();
};


#endif //SPORTSCAR_H
