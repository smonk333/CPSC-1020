//Karina Castillo
//lab7 - chal. 3

#include "DivSales.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void validate(string s,double *x)
{
	cout << s << ": ";
	cin >> *x;

	while (*x < 0)
	{
		cout << "Please enter 0 or greater: ";
		cin >> *x;
	}
}

int main()
{

	vector<DivSales> divisions;
	DivSales quarters[4];
	
	for (int i = 0; i < 4; i++) {
	
		double q1{0},q2{0},q3{0},q4{0};

		cout << "Enter sales data for Division " << (i+1) << endl;
		
		validate("Quarter 1",&q1);
		validate("Quarter 2",&q2);
		validate("Quarter 3",&q3);
		validate("Quarter 4",&q4);

		quarters[i].setSales(q1,q2,q3,q4);
		divisions.push_back(quarters[i]);	
	}

	for (int i = 0; i < 4; i++)
	{
		cout << setprecision(2) << "Total Sales for Division " << (i+1) << ": $ " << divisions.at(i).getDivSales() << endl;
	}

	cout << setprecision(2)<< "Total Corporate Sales: $" << divisions.at(0).getCorpSales() << endl;

	return 0;
}
