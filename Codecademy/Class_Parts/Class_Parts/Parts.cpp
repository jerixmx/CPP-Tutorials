#include <iostream>
#include<limits>
#include "Parts.h"
using namespace std;

void trash() {
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}


void Parts::set_availability()
{
	while (true) {
		cout << "Available? (Y/N):\t";
		cin >> y_n;
		if (y_n == 'y' || y_n == 'Y') {
			availability = true;
			break;
		}
		else if (y_n == 'n' || y_n == 'N') {
			availability = false;
			break;
		} 
		else { trash(); }
	}
}

void Parts::set_qty()
{
	if (availability == true) {
		while (true) {
			cout << "Enter quantity:\t\t";
			cin >> quantity;
			if (quantity > 0) {
				break;
			}
			else { trash();}
		}
	}
	else { quantity = 0; }
	
}

void Parts::set_location()
{
	if (availability == true) {
		cout << "Enter Storage Code:\t";
		cin >> location;
	}
	else { location = "-"; }
}


	string Parts::get_availability()
	{
		if (availability == true)
		{
			return "Yes";
		} 
		else {
			return "No";
		}
	}

	int Parts::get_qty()
{
	return quantity;
}

string Parts::get_location()
{
	return location;
}
