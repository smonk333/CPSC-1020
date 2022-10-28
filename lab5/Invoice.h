#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#ifndef INVOICE_H
#define INVOICE_H

class Invoice{
	private:
		int permitType;
		int total = 0;
		string permitName;

	public:
		Invoice();
		bool setPermitType(int permit);
		int getPermitType();
		string getPermitName();
		int calcTotal(int customer, int vehicle, int permit);
		void printReceipt(int customer, int vehicle, int permit);
};

#endif
