#pragma once
#include <iostream>
using namespace std;

void trash();
class Parts
{
	bool availability =false;
	char y_n='n';
	int quantity=0;
	string location="WH";

public:
	void set_availability();
	void set_qty();
	void set_location();

	bool get_availability();
	int get_qty();
	string get_location();

};

