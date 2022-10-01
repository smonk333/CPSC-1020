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
    //make variable Result, check dates using the checkDate function
    int result = checkDate(d, m, y);

    switch(result) {
        //date is fine, proceed to set values to user inputted values
        case 0:
            day = d;
            month = m;
            year = y;
            break;
        
        //year is incorrect
        case 1:
            day = 1;
            month = 1;
            year = 2021;
            break;
        
        //month is incorrect
        case 2:
            day = 1;
            month = 1;
            year = 2021;
            break;
        
        //day is incorrect for months with 31 days
        case 3:
            day = 1;
            month = 1;
            year = 2021;
            break;

        //day is incorrect for months with 30 days
        case 4:
            day = 1;
            month = 1;
            year = 2021;
            break;

        //day is incorrect for february on a leap year
        case 5:
            day = 1;
            month = 1;
            year = 2021;
            break;

        //day is incorrect for february on a non-leap year
        case 6:
            day = 1;
            month = 1;
            year = 2021;
            break;
    }
}

//defining setter methods to set the private variables to user input

bool Date::setDay(int d){
    int result = checkDate(d, month, year);

    if (result != 0){
        return false;
    }

    else {
        day = d;
        return true;
    }
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

}

int checkDate(int day, int month, int year)
{
    int status=0; 

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && ( day > 31 || day < 1) ) {
        status = 3; 
    }

    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30 || day<1) ) {
        status = 4; 
    }

    else if ((month == 2) && (year % 4 == 0) && (day > 29 || day < 1)) {
        status = 5; 
    }

    else if ((month == 2) && (year % 4 != 0) && (day > 28 || day < 1) ) {
        status = 6; 
    }

    else if ((year < 2021) || (year > 2022)) {
        status = 1;
    }

    if ((month < 1) || (month > 12)) {
        status = 2;
    }

    return status;
};