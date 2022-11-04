/*
Name: Colton Owenby
Class: 1021
Date: 11/2/2022
Desc: Header file for determining whether a word is a palindrome
Time: 1 hour
*/
#ifndef pString_h
#define pString_h
#include <string>


class Pstring
{
public:
bool isPalidrome(std::string palindrome);

};

class pString:public Pstring
{
public:
  std::string palindrome;

};

#endif
