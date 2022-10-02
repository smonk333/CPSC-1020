#include "calcDays.h"
using namespace std;

int calcDays(Date vaccine, Date exposure){
    Date testDate(01, 01, 2021);
    int daysMonth[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diffDay1;
    int diffDay2;
    int vaccineInt = (vaccine.getYear() * 365); //begin converting the dates to a single number, initialize new variables to hold these integers
    int exposureInt = (exposure.getYear() * 365);
    int test = (testDate.getYear() * 365);


    //add the number of days in each month up to the month of each Date object to the vaccineInt and exposureInt variables
    for (int i = vaccine.getMonth(); i > 0; --i){
        vaccineInt += daysMonth[i];
    }

    for (int i = exposure.getMonth(); i > 0; --i){
        exposureInt += daysMonth[i];
    }

    for (int i = testDate.getMonth(); i > 0; --i){
        test += daysMonth[i];
    }

    //add the days in each date object to the vaccineInt and exposureInt
    vaccineInt += vaccine.getDay();
    exposureInt += exposure.getDay();
    test += testDate.getDay();

    //get the difference between the integers made from the Date objects and the test date
    diffDay1 = vaccineInt - test;
    diffDay2 = exposureInt - test;

    cout << diffDay1 - diffDay2 << endl;
    return diffDay1 - diffDay2;
}

