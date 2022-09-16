#include "validateUserInput.h"
#include <iostream>

using namespace std;

bool validateUserInput(float in){
//declare a boolean for returning the results of the check
    bool output {};

//check to see if the input is greater than 0 (non-negative)
    if (in > 0)
         output = true;
    else if (in < 0)
        output = false;
    
//return the results of the check
    return output;
}