#include <iostream>
#include "Date.h"

using namespace std;

//default constructor, no input
Date::Date(){
    day = 1;
    month = 1;
    year = 2021;
}

//default constructor, input
Date::Date(int d, int m, int y){
    //if any of the setter functions fail, set items to default
    if (!setYear(y) || !setMonth(m) || !setDay(d)){
        year = 2021;
        month = 1;
        day = 1;
    }
}

//defining setter methods to set the private variables to user input

bool Date::setDay(int d){
    //set up array of the number of days in every month for reference in the switch statement
    int daysMonth[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    //make sure day is valid, if yes, set days to user inputted value. if no, default to 1.
    if (d >= 1 && d <= daysMonth[month - 1]){
        day = d;
        return true;
    }

    else if (d < 1 || d > daysMonth[month - 1]){
        day = 1;
        return false;
    }
    return false;
}

bool Date::setMonth(int m){
    if (m < 1 || m > 12) {
        month = 1;
        return false;
    }
    
    else {
        month = m;
        return true;
    }
    return false;
}

bool Date::setYear(int y){
    if (y < 2021 || y > 2022) {
        year = 2021;
        return false;
    }
    
    else {
        year = y;
        return true;
    }
    return false;
}

//defining getter methods to return private variables

int Date::getDay() const{
    return day;
}

int Date::getMonth() const{
    return month;
}

int Date::getYear() const{
    return year;
}

string Date::showDate() const{
    string d = to_string(day);
    string m = to_string(month);
    string y = to_string(year);
    string date = m + "/" + d + "/" + y;

    cout << date << endl;
    return date;
}
