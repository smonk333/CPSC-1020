#include <iostream>
#include <iomanip>
#include "Date.h"
#include "calcDays.h"

using namespace std;

int main(void){
    Date exposureDate;
    Date vaccineDate;

    string exposure;
    string results;
    string vaccine;
    int day;
    int month;
    int year;
    int diff;

    //gather data from the user
    cout << "Test result: " << endl;
    cin >> results;

    //input validation, because reading is hard sometimes.
    while (results != "negative" && results != "positive"){
        cout << "Entry invalid. Please try again." << endl;
        cin >> results;
    }

    //check if user was exposed to a positive case, validate input
    if (results == "negative"){
        cout << "Exposed to positive case: " << endl;
        cin >> exposure;

        while (exposure != "Yes" && exposure != "No"){
        cout << "Entry invalid. Please try again." << endl;
        cin >> exposure;
        }
        
        //user tested negative, was not exposed
        if (exposure == "No"){
            cout << "Length of isolation: 0 days" << endl;
            return 0;
        }

        //user tested negative, was exposed. continue on to check vaccine status against exposure date
        else if (exposure == "Yes"){

            cout << "Month of exposure: ";
            cin >> month;

            cout << "Day of exposure: ";
            cin >> day;

            cout << "Year of exposure: ";
            cin >> year;

           
            //input validation, setting private variables of object exposureDate
            while (!exposureDate.setMonth(month)){
                cout << "Invalid month. Try again" << endl;
                cin >> month;
            }

            while (!exposureDate.setYear(year)){
                cout << "Invalid year. Try again" << endl;
                cin >> year;
            }

            while (!exposureDate.setDay(day)){
                cout << "Invalid day. Try again" << endl;
                cin >> day;
            }

            cout << "Second vaccine dose received: " << endl;
            cin >> vaccine;

            while (vaccine != "Yes" && vaccine != "No"){
                cout << "Invalid entry. Please try again." << endl;
                cin >> vaccine;
            }

            //user was not vaccinated, end program.
            if (vaccine == "No"){
                cout << "Vaccination status at time of exposure: not fully vaccinated." << endl;
                cout << "Length of isolation: 10 days" << endl;
                return 0;
            }
            
            //user was vaccinated. Gather date of 2nd vaccination, validate data, and calculate difference between vaccination date and exposure date
            else if (vaccine == "Yes"){
                cout << "Month of 2nd vaccination: ";
                cin >> month;

                cout << "Day of 2nd vaccination: ";
                cin >> day;

                cout << "Year of 2nd vaccination: ";
                cin >> year;

           
                //input validation, setting private variables of object vaccineDate
                while (!vaccineDate.setMonth(month)){
                    cout << "Invalid month. Try again" << endl;
                    cin >> month;
                }

                while (!vaccineDate.setYear(year)){
                    cout << "Invalid year. Try again" << endl;
                    cin >> year;
                }

                while (!vaccineDate.setDay(day)){
                    cout << "Invalid day. Try again" << endl;
                    cin >> day;
                }

                diff = calcDays(exposureDate, vaccineDate);

                if (diff >= 14){
                    cout << "Vaccination status at time of exposure: fully vaccinated" << endl;
                    cout << "Length of isolation: 5 days" << endl;
                    return 0;
                }

                else if (diff < 14){
                    cout << "Vaccination status at time of exposure: not fully vaccinated" << endl;
                    cout << "Length of isolation: 10 days" << endl;
                    return 0;
                }
            }
        }
    }

    else if (results == "positive"){
        cout << "Length of isolation: 5 days" << endl;
        return 0;
    }
}