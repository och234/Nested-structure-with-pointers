// using pointers for nested structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

struct interior{
	string material;
	char color;
};

struct car {
	int year;
	char brand;
	bool automatic;
	interior seat;
};

//we can easily use pointers to access this nested structure
//please remember pointers should only be used when really neccessary
int main()
{
	car mercedes;
	car *mercedesptr;

	mercedesptr = &mercedes;

	mercedesptr->automatic = true;
	mercedesptr->brand = 'S';
	mercedesptr->year = 2018;
	mercedesptr->seat.color = 'B';
	mercedesptr->seat.material = "Leather";

	cout << "This is a " << mercedesptr->brand << "Brand Mercedes"
		<< "\n Automatic: " << mercedesptr->automatic << "\n Year: " << mercedesptr->year
		<< "\n Seat color and Material: " << mercedesptr->seat.color << ", "
		<< mercedesptr->seat.color;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
