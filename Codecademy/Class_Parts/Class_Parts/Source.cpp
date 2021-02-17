/*Builds and shows inventory for availability, quantity, and location*/

#include "Parts.h"
#include "Source.h"


int main() {
	Parts bolts;
	Parts nuts;
	Parts standoffs;
	Parts screwdriver;
	Parts pipes;

	cout << "Bolts\n";
	bolts.set_availability();
	bolts.set_qty();
	bolts.set_location();

	cout << "Nuts\n";
	nuts.set_availability();
	nuts.set_qty();
	nuts.set_location();

	cout << "Standoffs\n";
	standoffs.set_availability();
	standoffs.set_qty();
	standoffs.set_location();

	cout << "Screwdriver\n";
	screwdriver.set_availability();
	screwdriver.set_qty();
	screwdriver.set_location();

	cout << "Pipes\n";
	pipes.set_availability();
	pipes.set_qty();
	pipes.set_location();
	print_inventory(bolts, nuts, standoffs, screwdriver, pipes);
}