// module2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{
	cout << "Welcome to the age program!" << endl; 

	int userAge = 0; 
	double userAgeDouble = 0.0; 
	string userAgeString; 

	cout << "Enter your age (whole number): "; 
	cin >> userAge; 

	cout << "Enter your age (decimal): "; 
	cin >> userAgeDouble; 

	cout << "Enter your age (English): "; 
	cin >> userAgeString; 

	cout << "Your age as a whole number is " << userAge << "." << endl; 

	cout << "Your age with a decimal is " << userAgeDouble << "." << endl; 

	cout << "Your age in English is " << userAgeString << "." << endl; 

	return 0; 
}
