#include <iostream>
#include <cmath>
#include "calcDays.h"
#include <cstdlib>

using namespace std;

int calcDays(Date vaccine, Date exposure){
    int daysMonth[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int diffDay1;
    int diffDay2;
    int vaccineInt = (vaccine.getYear() * 365); //begin converting the dates to a single number, initialize new variables to hold these integers
    int exposureInt = (exposure.getYear() * 365);
    int testDate = (2021 * 365) + (1 * daysMonth[1]) + (1);

    //add the number of days in each month up to the month of each Date object to the vaccineInt and exposureInt variables
    for (int i = vaccine.getMonth(); i > 0; i--){
        vaccineInt += daysMonth[i];
    }

    for (int i = exposure.getMonth(); i > 0; i--){
        exposureInt += daysMonth[i];
    }

    //add the days in each date object to the vaccineInt and exposureInt
    vaccineInt += vaccine.getDay();
    exposureInt += exposure.getDay(); 

    //get the difference between the integers made from the Date objects and the test date
    diffDay1 = vaccineInt - testDate;
    diffDay2 = exposureInt - testDate;

    return diffDay2 - diffDay1;
}

