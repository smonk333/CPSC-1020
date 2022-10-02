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
    if (setYear(y) == true){
        year = y;
    }

    else {
        year = 2021;
    }
    
    //check if month is valid using the setMonth function, default to 1 if not, set the month variable to m if it is
    if (setMonth(m) == true){
        month = m;
    }

    else {
        month = 1;
    }

    //check if day is valid using the setDay function, default to 1 if not, set the day variable to d if it is
    if (setDay(d) == true){
        day = d;
    }

    else {
        day = 1;
    }
}

//defining setter methods to set the private variables to user input

bool Date::setDay(int d){
    //set up array of the number of days in every month for reference in the switch statement
    int daysMonth[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    
    //use a switch statement dependent on the private variable month to determine if the inputted day is possible given the month
    switch (month){
        case 1:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 2:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 3:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 4:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 5:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 6:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 7:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 8:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 9:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 10:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 11:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;

        case 12:
            if (d < 1 || d > daysMonth[month]) {
                day = 1;
                return false;
            }

            else if (d >= 1 && d <= daysMonth[month]) {
                day = d;
                return true;
            }

            break;
    }
    return false;
}

bool Date::setMonth(int m){
    if (m < 1) {
        return false;
    }

    else if (m > 12) {
        return false;
    }
    
    else {
        month = m;
        return true;
    }
}

bool Date::setYear(int y){
    if (y < 2021) {
        return false;
    }

    else if (y > 2022) {
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

string showDate(){
    return "test";
}
