//Karina Castillo
//lab7

#include "Rational.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num{0},denom{0};

	cout << "Enter the numerator and denominator separated by a space: ";
	cin >> num;
	cin >> denom;
		
	Rational fraction(num,denom);

	cout << "Reduced form: " << fraction << endl;

	return 0;
}
