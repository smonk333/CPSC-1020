/*
Name: Colton Owenby
Class: 1021
Date: 11/2/2022
Desc: Asks the user to enter a word to determine if it is a palindrome.
Time: 1 hour
*/

#include "Pstring.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  pString Pstring; //calls the Pstring object from pString
  string palindrome;

  cout << "This is a palindrome-testing program. Enter a string to test: " << endl;
  cin >> palindrome;

  //Determines if the isPalidrome function is a palindrome.
  if(Pstring.isPalidrome(palindrome) == true)
  {
    cout << palindrome << " is a palindrome" << endl;
  }
  else
  {
    cout << palindrome << " is not a palindrome" << endl;
  }


  return 0;
}
