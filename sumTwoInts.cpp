// 3d.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Jeremy Therrien 8/14/24

#include <iostream>

using namespace std; 

int main()
{
    int x, y, z; 

    cout << "Enter two numbers that you would like to sum up (spaced after another): "; 
    cin >> x >> y; 

    z = x + y; 

    cout << "The sum of the two numbers is " << z << "!"; 

    return 0; 
}
