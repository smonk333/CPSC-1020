//Karina Castillo
//lab7

#include <iostream>

using namespace std;

class Rational 
{
	private:
		int numerator, denominator;
		void reduce();
	public:
		Rational();
		Rational(int,int);

		friend ostream& operator<<(ostream&,Rational& r);
};
