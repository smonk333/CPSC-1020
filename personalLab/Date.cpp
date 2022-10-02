#include <iostream>
#include <iomanip>
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
    //check if year is valid using the setYear function, default to 2021 if not, set the year variable to y if it is
    if (setYear(y)){
        year = y;
    }

    else {
        year = 2021;
    }
    
    //check if month is valid using the setMonth function, default to 1 if not, set the month variable to m if it is
    if (setMonth(m)){
        month = m;
    }

    else {
        month = 1;
    }

    //check if day is valid using the setDay function, default to 1 if not, set the day variable to d if it is
    if (setDay(d)){
        day = d;
    }

    else {
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
}

//defining getter methods to return private variables

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

string Date::showDate(){
    string d = to_string(day);
    string m = to_string(month);
    string y = to_string(year);
    string date = m + "/" + d + "/" + y;

    return date;
}
