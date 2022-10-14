#include <iostream>
#include "customerType.h"
#include "Vehicle.h"

using namespace std;

bool validateInput(int input) 
{
    if ((input == 1) || (input == 2) || (input == 3) || (input == 4))
        return true;
    else
        return false;
}


int main()
{
    string distance, phoneNumber;
    string college, administration;
    string gradDate;
    string store;
    bool enrolledStat;
	int yearsEmployed;
    int customerInput = 0;

    do {
        cout << "What is your category? " << endl;
        cout << "1 : Commuter" << endl;
        cout << "2 : Employee" << endl;
        cout << "3 : Student" << endl;
        cout << "4 : Vendor" << endl;
        cin >> customerInput;
    } while (!validateInput(customerInput));

    //Inputting information for permit type
        string firstName, lastName, address, email;
        cout << "What is your first name?" << endl;
        cin >> firstName;
        cout << "What is your last name?" << endl;
        cin >> lastName;
        cout << "What is your address?" << endl;
        getline(cin, address);
        cout << "What is your email?" << endl;
        cin >> email;

    switch (customerInput){
        //Karina -> Commuter
        case 1:{
            cout << "What is your distance away from campus?" << endl;
            cin >> distance;
            cout << "What is your phone number" << endl;
            cin >> phoneNumber;
            Commuter commuter(firstName, lastName, address, email, distance, phoneNumber);
            break;
        }

        //Colton -> Employee
        case 2:{
            cout << "What college are you in?" << endl;
            cin >> college;
            cout << "What administration are you in?" << endl;
            cin >> administration;
            Employee employee(firstName, lastName, address, email, college, administration);
            break;
        }

        //Stephen -> Student 
        case 3:{
            cout << "When is your graduation date? (d/m/y format)" << endl;
            cin >> gradDate;
            cout << "What is your enrollment status? (1 for enrolled, 0 for unenrolled)" << endl;
            cin >> enrolledStat;
            Student student(firstName, lastName, address, email, gradDate, enrolledStat); 
            break;
        }

        //Garett -> Vendor
        case 4:{
	        cout << "Which store do you work for on campus?" << endl;
	        getline(cin, store);
	        cout << "How many years have you worked there?" << endl;
	        cin >> yearsEmployed;
            Vendor vendor(firstName, lastName, address, email, store, yearsEmployed);
            break;
        }
    }

    //------------
    //Inputting Information for vehicle type
    int vehicleInput = 0;

    do {
        cout << "What is your vehicle type? " << endl;
        cout << "1 : Motorcycle" << endl;
        cout << "2 : Truck" << endl;
        cout << "3 : Sportscar" << endl;
        cout << "4 : Sedan" << endl;
        cin >> vehicleInput;
    } while (!validateInput(vehicleInput));

    string mk, md, y;

    cout << "What is the make of your vehicle? " << endl;
    cin >> mk;
    cout << "What is the model of your vehicle? " << endl;
    cin >> md;
    cout << "What is the year of your vehicle? " << endl;
    cin >> y;

    switch (vehicleInput)
    {
        //Karina -> Motorcycle
        case 1:{
            string cy, cr;

            cout << "How many cylinders (4cyl, 6cyl, or 8cyl)? " << endl;
            cin >> cy;
            cout << "What is the color of your vehicle? " << endl;
            cin >> cr;
            Motorcycle motorcycle(mk, md, y, cy, cr);
            break;
        }

            //Colton -> Truck
        case 2:{
            double mg;
            string tn;

            cout << "What is the mpg of your vehicle?" << endl;
            cin >> mg;
            cout << "What is the transmission of your vehicle?" << endl;
            cin >> tn;
            Truck truck(mk, md, y, mg, tn);
            break;
        }
            //Stephen -> Sportscar
        case 3:{
            int nd;
            int nhp;

            cout << "What is the number of doors on your vehicle?" << endl;
            cin >> nd;
            cout << "What is the horsepower of your vehicle?" << endl;
            cin >> nhp;
            Sportscar sportscar(mk, md, y, nd, nhp);
            break;
        }
            //Garrett -> Sedan
        case 4:{
            int wt;
            bool ie;

            cout << "What is the weight of your vehicle?" << endl;
            cin >> wt;
            cout << "Is your vehicle electric? (1 for yes, 0 for no)" << endl;
            cin >> ie;
            Sedan sedan(mk, md, y, wt, ie);
            break;
        }
    }


//Permit Type
    int pInput;
    do {
        cout << "What is your permit type?\n" << "1: Semester\n" << "2: Annual\n" << "3: Daily" << endl;
        cin >> pInput;
    } while (Invoice.setPermitType(pInput));


    Invoice.printRecipt(customerInput, vehicleInput, Invoice.getPermitType()




//if there are multiple words in a string (separated by spaces), use getLine
