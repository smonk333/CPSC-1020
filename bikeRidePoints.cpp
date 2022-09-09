// Program to calculate points awarded to students for riding their bikes to school, given the number of bike rides.
// Garrett Boling

#include <iostream>

using namespace std;

int main()
{

// ask for number of bike rides
	int bikeRides;
	cout << "Enter the number of bike rides to campus: ";
	cin >> bikeRides;

	while (bikeRides < 0){
		cout << "You have entered an invalid answer. Please try again: ";
		cin >> bikeRides;
	}
	
// switch statement to determine the number of points that have been earned
	switch(bikeRides){
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
