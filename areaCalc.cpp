// This is a program to calculate the area of different shapes.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

  //defining variable(s)
  int type = 0;
  float length = 0;
  float base = 0;
  float area = 0;
  const float PI = 3.14159;

  //asking the user for what kind of shape they want to get area of and checking to see if the input is valid
  cout << "What kind of shape are you calculating the area of?\n" << endl;
  cout << "1 -- square\n2 -- circle\n3 -- right triangle\n4 -- quit" << endl;
  cin >> type;

  //switch statement to perform calculation or quit
  if(type == 1){
      cout << "input the length of a side:" << endl;
      cin >> length;
      area = length * length;
      cout << "area is: " << setprecision(3) << area << endl;
  }

  else if(type == 2){
      cout << "input the diameter:" << endl;
      cin >> length;
      area = length * PI;
      cout << "area is: " << setprecision(3) << area << endl;
  }
  
  else if(type == 3){
      cout << "input the height" << endl;
      cin >> length;
      cout << "input the base" << endl;
      cin >> base;
      area = ((length * base) / 2);
      cout << "area is: " << setprecision(3) << area << endl;
  }

  else if(type == 4){
      cout << "exiting..." << endl;
      exit(0);
  }

  else {
      cout << "invalid option! exiting..." << endl;
      exit(1);
  }
}
