// program to determine the cost of a hospital stay given information from the user
// Garrett Boling

#include <iostream>
#include <cmath>
#include <iomanip>
#include "validateUserInput.h"
#include "calcTotalCharges.h"

using namespace std;

// main goes here
int main(){

// declaring variables
  char patient;
  int daysIn;
  float roomRate;
  float labFees;
  float medicationCharge;
  float total;

// prompting the user for patient type
  cout << "This program will calculate a patient\'s hospital charges." << endl;
  cout << "Enter I for in-patient or O for out-patient: " << endl;

// take in the data
  cin >> patient;

// input validation, because reading is hard sometimes
  while (patient != 'I' && patient != 'O'){
    cout << "ERROR Please enter I for in-patient or O for out-patient:" << endl;
    cin >> patient;
  }

// check for patient type, perform appropriate calculations, and validate their inputs
  if (patient == 'I'){
    cout << "Number of days in the hospital: " << endl;
    cin >> daysIn;

    while (!validateUserInput(daysIn)) {
            cout << "ERROR: Number cannot be negative" << endl;
            cin >> daysIn;
        }
  }

}
