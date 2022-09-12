// Shape area calculator
// Garrett Boling

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

// asking the user for what kind of shape they want to get area of and checking to see if the input is valid
  cout << "What kind of shape are you calculating the area of?\n" << endl;
  cout << "1 -- square\n2 -- circle\n3 -- right triangle\n4 -- quit" << endl;
  cin >> type;

// if/else statements to either perform calculation or quit
  if(type == 1){
      cout << "input the length of a side: " << endl;
      cin >> length;
      area = (length * length);
      cout << fixed;
      cout << "Area = " << setprecision(2) << area << endl;
  }

  else if(type == 2){
      cout << "radius of the circle: ";
      cin >> length;
      area = (pow(length, 2) * PI);
      cout << fixed;
      cout << "Area = " << setprecision(2) << area << endl;
  }
  
  else if(type == 3){
      cout << "height: " << endl;
      cin >> length;
      cout << "base: " << endl;
      cin >> base;
      area = ((length * base) / 2);
      cout << fixed;
      cout << "Area = " << setprecision(2) << area << endl;
  }

  else if(type == 4){
      exit(0);
  }

  else {
      cout << "You entered an invalid choice. Good bye!" << endl;
      exit(1);
  }
  
  return 0;
}
