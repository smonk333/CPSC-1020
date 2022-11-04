//
// Created by gboling on 11/2/22.
//

#ifndef CPSC_1020_ENCRYPTABLESTRING_H
#define CPSC_1020_ENCRYPTABLESTRING_H
#include <string>
using namespace std;

class EncryptableString: public string {
    private:
        string encryptMe;

    public:
        EncryptableString();
        EncryptableString(string in);
        void encrypt();
        string getString();
};


#endif //CPSC_1020_ENCRYPTABLESTRING_H
