#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

Invoice::Invoice() {

}

bool Invoice::setPermitType(int p) {
	switch (p) {
        case 1: {
		    permitType = p;
		    permitName = "Annual";
		    return true;
        }

        case 2: {
		    permitType = p;
		    permitName = "Semester";
		    return true;
	    }

	    case 3: {
		    permitType = p;
		    permitName = "Daily";
		    return true;
	    }

	    default: {
            return false;
        }
	}
	
}

int Invoice::getPermitType() {
    return permitType;
}

string Invoice::getPermitName() {
    return permitName;
}

int Invoice::calcTotal(int customer, int vehicle, int permit) {
    //defining prices based on customer types

    double discount = 0.2;
	double serviceCharge = 20;
	double priceDaily = 4.0;
	double priceCommuter = 200;
	double priceEmployee = 100;
	double priceStudent = 150;
	double priceVendor = 50;
	
	//price based on customer type
	switch (customer) {
	case 1:
		total += priceCommuter;
		break;
	case 2:
		total += priceEmployee;
		break;
	case 3:
		total += priceStudent;
		break;
	case 4:
		total += priceVendor;
		break;
	}

	//Price adjust to permit type
	switch (permit) {
		//Annual price is not changed
	    case 1: {
            total = total;
            break;
        }
		    //Semester price is halved
	    case 2: {
            total = .5 * total;
            break;
        }
	    	//Daily price is constant regardless of vehicle and customer
	    case 3: {
            total = priceDaily;
           break;
        }
	}

	//Apply discount
	// Discount: If customer owns a motorcycle, there is an 80% off discount
	if (vehicle == 1) {
		total = total * discount;
	}
    //discount: if the user is a sedan-driving vendor, the price of the permit is free (plus the service charge)
    if (customer == 4 && vehicle == 4){
        total = 0;
    }

	//Apply service charge
	total += serviceCharge;
	
	return total;
}
void Invoice::printReceipt(int customer, int vehicle, int permit) {
    calcTotal(customer, vehicle, permit);
    cout << "Permit Type: " << permitName << endl;
    cout << "Total Price : " << total << endl;
}