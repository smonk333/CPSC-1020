//Karina Castillo
//lab7

#include "Rational.h"
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;

Rational::Rational(){}

Rational::Rational(int n, int d)
{
	numerator = n;
	denominator = d;
	reduce();
}

void Rational:: reduce()
{
	int factor = __gcd(numerator,denominator);
	numerator = numerator / factor;
	denominator = denominator / factor;
	if (denominator < 0){
		numerator = numerator * -1;
		denominator = abs(denominator);
	}

}

ostream& operator<<(ostream&, Rational& r)
{
	cout << r.numerator << "/" << r.denominator;
	return cout;
}

