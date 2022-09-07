// User enters the number of bike rides to campus and then displays the number of points awarded based on a given chart
// Karina Castillo
//

#include <iostream>

using namespace std;

int main()
{
	int rides;
	cout << "Enter the number of bike rides to campus: ";
	cin >> rides;

	while (rides < 0){
		cout << "You have entered an invalid answer. Please try again: ";
		cin >> rides;
	}
	switch(rides){
		case 0:
			cout << "You earned 0 points this semester." << endl;
			break;
		case 1:
			cout << "You earned 3 points this semester." << endl;
			break;
		case 2:
			cout << "You earned 10 points this semester." << endl;
			break;
		case 3:
			cout << "You earned 15 points this semester." << endl;
			break;
		case 4:
			cout << "You earned 30 points this semester." << endl;
			break;
		default:
			cout << "You earned 50 points this semester." << endl;
			break;
	}

	return 0;
}
