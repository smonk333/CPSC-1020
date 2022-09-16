// program to determine the cost of a hospital stay given information from the user
// Garrett Boling

#include <iostream>
#include <cmath>
#include <iomanip>
#include "validateUserInput.h"
#include "calcTotalCharges.h"

using namespace std;

//main goes here
int main(){

//declaring variables
  char patient;
  int daysIn;
  float roomRate;
  float labFees;
  float medicationCharge;
  float total;

//prompting the user for patient type
  cout << "This program will calculate a patient\'s hospital charges." << endl;
  cout << "Enter I for in-patient or O for out-patient: " << endl;

//take in the data
  cin >> patient;

//input validation, because reading is hard sometimes
  while (patient != 'I' && patient != 'O'){
    cout << "ERROR Please enter I for in-patient or O for out-patient:" << endl;
    cin >> patient;
  }

//check for patient type, perform appropriate calculations, and validate their inputs
  if (patient == 'I'){

//input days stayed
    cout << "Number of days in the hospital: " << endl;
    cin >> daysIn;

//validate
    while (!validateUserInput(daysIn)) {
      cout << "ERROR: Number cannot be negative." << endl;
      cin >> daysIn;
    }

//input days stayed
    cout << "Daily room rate ($): " << endl;
    cin >> roomRate;

//validate
    while (!validateUserInput(roomRate)) {
      cout << "ERROR: Number cannot be negative." << endl;
      cin >> roomRate;
    }

//input lab fees
    cout << "Lab fees and other service charges ($): " << endl;
    cin >> labFees;

//validate
    while (!validateUserInput(labFees)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> labFees;
    }

//input medication charges
    cout << "Medication charges ($): " << endl;
    cin >> medicationCharge;

//validate
    while (!validateUserInput(medicationCharge)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> medicationCharge;
    }

//calculate the total charges and display the total before ending the program
    total = calcTotalCharges(daysIn, roomRate, labFees, medicationCharge);
    cout << "Your total hospital bills is $" << fixed <<setprecision(2) << total << endl;
  }

//if the patient is an outpatient...
  else {

//input lab fees
    cout << "Lab fees and other service charges ($): " << endl;
    cin >> labFees;

//validate
    while (!validateUserInput(labFees)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> labFees;
    }

//input medication charges
    cout << "Medication charges ($): " << endl;
    cin >> medicationCharge;

//validate
    while (!validateUserInput(medicationCharge)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> medicationCharge;
    }

//calculate the total charges and display the total before ending the program
    total = calcTotalCharges(labFees, medicationCharge);
    cout << "Your total hospital bills is $" << fixed <<setprecision(2) << total << endl;
  }

  return 0;
}


