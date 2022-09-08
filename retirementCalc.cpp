//	Calculating the amount in a retirement account
//  Garrett Boling

#include <iostream>
#include <iomanip>

// importing custom header file with the calculation function declaration in it
#include "compoundCalc.h"

using namespace std;

int main()
{
// declare variables
	int principle, time;
	float rate, retirementSavings;

// gather data from the user:
	cout << "Enter the principle value: ";
	cin >> principle;
	cout << "Enter the interest rate as a decimal: ";
	cin >> rate;
	cout << "Enter the time the money is left to compound (in years): ";
	cin >> time;

// send the data out for calculations, get the final answer back and store it in a variable
	retirementSavings = compoundCalc(principle, rate, time);

// printing output
	cout << "The total amount in the account after this period of time will be: $" << std::fixed << setprecision(2) << retirementSavings << endl;

	return 0;
}
