//Karina Castillo
//lab7

#include "DivSales.h"
#include <vector>

double DivSales::totalSales {0.0};

double DivSales::getDivSales()
{ return divSales;}

double DivSales::getCorpSales()
{ return totalSales;}

void DivSales::setSales(double first, double second, double third, double fourth)
{

	sales.insert(sales.end(),{first,second,third, fourth});
	divSales = first + second + third + fourth;
	totalSales += divSales;
}
