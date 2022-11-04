//
// Created by gboling on 11/2/22.
//

#include "EncryptableString.h"
#include <string>
using namespace std;

EncryptableString::EncryptableString() {
    encryptMe = "";
}

EncryptableString::EncryptableString(string in) {
    encryptMe = in;
}

void EncryptableString::encrypt(){
    for(char & i : encryptMe)
    {
        if( (i >= 'a' && i < 'z') || (i >= 'A' && i < 'Z'))
        {
            i += 1;
        }
        else if( i == 'z' || i == 'Z' )
        {
            i -= 25;
        }
    }
}

string EncryptableString::getString() {
    return encryptMe;
}
