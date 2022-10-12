//
// Created by gboling on 10/12/2022.
//
#include <iostream>
#include "3np1.h"
using namespace std;

int main(){
    int choice;
    int value = 0;
    cout << "Choose which one to do: " << endl;
    cout << "1. check if odd" << endl;
    cout << "2. count number of numbers in sequence" << endl;
    cout << "3. get sum of numbers in sequence" << endl;
    cout << "4. check longest sequence in a range of numbers" << endl;
    cout << "5. exit" << endl;

    cin >> choice;

    switch (choice) {
        case 1:
            cout << "enter value: " << endl;
            cin >> value;
            cout << isOdd(value) << endl;
            break;

        case 2:
            cout << "Enter value: " << endl;
            cin >> value;
            cout << len3nplus1(value) << endl;
            break;

        case 3:
            cout << "enter value: " << endl;
            cin >> value;
            cout << sumSeq3nPlus1(value) << endl;
            break;

        case 4:
            cout << "enter value: " << endl;
            cin >> value;
            cout << longestSequence(value);
            break;

        case 5:
            return 0;
            break;
    }
}