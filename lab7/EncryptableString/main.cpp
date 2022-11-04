//
// Created by gboling on 11/2/22.
//
#include <iostream>
#include <string>
#include "EncryptableString.h"

using namespace std;

int main(){
    string input;

    cout << "This is an encryption program. Enter a string to encrypt: ";
    cin >> input;

    //encrypt string

    EncryptableString encryptMe(input);

    encryptMe.encrypt();

    cout << "Here is the encrypted string: " << encryptMe.getString() << endl;

    return 0;
}