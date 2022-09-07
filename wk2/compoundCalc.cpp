#include <iostream>
#include <cmath>
#include <iomanip>

float compoundCalc(int principal, float rate, int years){
  float output = principal * pow((1 + rate), years);
  return output;
}
