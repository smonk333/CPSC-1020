/*
Name: Colton Owenby
Class: 1021
Date: 11/2/2022
Desc: Uses the reverse function to see if the string entered is the same as before.
Time: 1 hour
*/
#include "Pstring.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
//Returns a bool value if the string palindrome is the same as the temp value reversed
bool Pstring::isPalidrome(std::string palindrome)
{
  std::string temp;
  temp = palindrome;
  std::reverse (temp.begin (), temp.end ());

  if(palindrome == temp)
  {
    return true;
  }
  else
  {
    return false;
  }
}
