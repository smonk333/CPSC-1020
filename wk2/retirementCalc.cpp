//
//  Karina Castillo

#include <iostream>
#include "compoundCalc.h"

using namespace std;

int main()
{
	int P, t;
	float r, RS;

	cout << "Enter the principal value: ";
	cin >> P;
	cout << "Enter the interest rate ( as a decimal): ";
	cin >> r;
	cout << "Enter the number of years in the account: ";
	cin >> t;

	RS = compoundCalc(P,r,t);
	cout << "Your retirement savings will be $" << RS << endl;

	return 0;
}
