// program to determine the cost of a hospital stay given information from the user
// Garrett Boling

#include <iostream>
#include <cmath>
#include <iomanip>
#include "patient.h"

using namespace std;

//main goes here
int main(){

//declaring variables
  Patient myPatient;
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
  while (myPatient.setPatientType(patient) == false){
    cout << "ERROR Please enter I for in-patient or O for out-patient:" << endl;
    cin >> patient;
  }

//check for patient type, perform appropriate calculations, and validate their inputs
  if (myPatient.getPatientType() == 'I'){

//input days stayed
    cout << "Number of days in the hospital: " << endl;
    cin >> daysIn;

//validate
    while (!myPatient.setDays(daysIn)) {
      cout << "ERROR: Number cannot be negative." << endl;
      cin >> daysIn;
    }

//input days stayed
    cout << "Daily room rate ($): " << endl;
    cin >> roomRate;

//validate
    while (!myPatient.setRate(roomRate)) {
      cout << "ERROR: Number cannot be negative." << endl;
      cin >> roomRate;
    }

//input lab fees
    cout << "Lab fees and other service charges ($): " << endl;
    cin >> labFees;

//validate
    while (!myPatient.setServices(labFees)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> labFees;
    }

//input medication charges
    cout << "Medication charges ($): " << endl;
    cin >> medicationCharge;

//validate
    while (!myPatient.setMedication(medicationCharge)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> medicationCharge;
    }

//calculate the total charges and display the total before ending the program
    cout << "Your total hospital bills is $" << fixed <<setprecision(2) << myPatient.calcTotalCharges() << endl;
  }

//if the patient is an outpatient...
  else if (myPatient.getPatientType() == 'O') {

//input lab fees
    cout << "Lab fees and other service charges ($): " << endl;
    cin >> labFees;

//validate
    while (!myPatient.setServices(labFees)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> labFees;
    }

//input medication charges
    cout << "Medication charges ($): " << endl;
    cin >> medicationCharge;

//validate
    while (!myPatient.setMedication(medicationCharge)) {
      cout << "ERROR: Number cannot be negative" << endl;
      cin >> medicationCharge;
    }

//calculate the total charges and display the total before ending the program
    cout << "Your total hospital bills is $" << fixed << setprecision(2) << myPatient.calcTotalCharges() << endl;
  }

  return 0;
}


