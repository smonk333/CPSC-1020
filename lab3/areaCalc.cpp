#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
//creating variables
    int input;
    double radius;
    double length;
    double width;
    double side;
    double base1;
    double base2;
    double height;

//allow user to select a shape from the menu below
    cout << "1 -- circle\n2 -- square\n3 -- rectangle\n4 -- trapezoid\n5 -- quit" << endl;
    cin >> input;

//validate input
    while (input < 1 && input > 5) {
        cout << "Invalid selection. please try again." << endl;
        cin >> input;
    }
    cout << fixed;
//switch statement for the possible selections on the menu
    switch (input) {

        case 1:

//create object myCircle of type circle
            circle myCircle;

//get radius from user, and validate that it is positive
            cout << "Radius: ";
            cin >> radius;

            while (!myCircle.setRadius(radius)) {
                cout << "\nInvalid radius! Try again." << endl;
                cin >> radius;
            }

//calculate area, and return area before exiting the program
            cout << "Area: " << setprecision(1) << myCircle.calcArea() << endl;

            break;

        case 2:

//create object mySquare of type square
            square mySquare;

//get side length from user, and validate that it is positive
            cout << "Side: ";
            cin >> side;

            while (!mySquare.setSide(side)) {
                cout << "\nInvalid side length! Try again." << endl;
                cin >> side;
            }

//calculate area, and return area before exiting the program
            cout << "Area: " << setprecision(1) << mySquare.calcArea() << endl;

            break;

        case 3:

//create object myRectangle of type rectangle
            rectangle myRectangle;

//get length and width from user, validate that they are positive
            cout << "Length: ";
            cin >> length;

            while (!myRectangle.setLength(length)) {
                cout << "\nInvalid length! Try again" << endl;
                cin >> length;
            }

            cout << "Width: ";
            cin >> width;

            while (!myRectangle.setWidth(width)) {
                cout << "\nInvalid width! Try again" << endl;
                cin >> width;
            }

//calculate area, and return area before exiting the program
            cout << "Area: " << setprecision(1) << myRectangle.calcArea() << endl;

            break;

        case 4:

//create object myTrapezoid of type trapezoid
            trapezoid myTrapezoid;

//get base1, base2, and height from the user, validate that they are positive
            cout << "Base1: ";
            cin >> base1;

            while (!myTrapezoid.setBase1(base1)) {
                cout << "\nInvalid base1! Try again." << endl;
                cin >> base1;
            }

            cout << "Base2: ";
            cin >> base2;

            while (!myTrapezoid.setBase2(base2)) {
                cout << "\nInvalid base2! Try again." << endl;
                cin >> base2;
            }

            cout << "Height: ";
            cin >> height;

            while (!myTrapezoid.setHeight(height)) {
                cout << "\nInvalid height! Try again." << endl;
                cin >> height;
            }
//calculate area, and return area before exiting the program
            cout << "Area: " << setprecision(1) << myTrapezoid.calcArea() << endl;

            break;

        case 5:

//print exit message, exit program
            cout << "Goodbye!" << endl;
            return 0;
    }

    return 0;
}