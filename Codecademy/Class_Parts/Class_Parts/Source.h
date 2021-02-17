#pragma once

inline void print_inventory(Parts& bolts, Parts& nuts, Parts& standoffs, Parts& screwdriver, Parts& pipes)
{

	cout << "\n";
	cout << "Part\t\t" << "Available?\t" << "Qty\t" << "Storage Code\n";
	cout << "====================================================\n";
	cout << "Bolts\t\t" << bolts.get_availability() << "\t\t" << bolts.get_qty() << "\t" << bolts.get_location() << "\n";
	cout << "Nuts\t\t" << nuts.get_availability() << "\t\t" << nuts.get_qty() << "\t" << nuts.get_location() << "\n";
	cout << "Standoffs\t" << standoffs.get_availability() << "\t\t" << standoffs.get_qty() << "\t" << standoffs.get_location() << "\n";
	cout << "Screwdriver\t" << screwdriver.get_availability() << "\t\t" << screwdriver.get_qty() << "\t" << screwdriver.get_location() << "\n";
	cout << "Pipes\t\t" << pipes.get_availability() << "\t\t" << pipes.get_qty() << "\t" << pipes.get_location() << "\n";
}
