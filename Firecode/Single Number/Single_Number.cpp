#include <iostream>
#include "functions.h"
#include <array>


using namespace std;


int main() {
	int arr1[]= { 1 };
	int sz1 = 1;

	int arr2[]= {1,2,3,4,1,2,3,4,5};
	int sz2 = 9;

	int arr3[]= {-1,-1,-1,-1,-5};
	int sz3 = 5;

	cout<<single_number(arr1, sz1)<<endl;
	cout<<single_number(arr2, sz2)<<endl;
	cout<<single_number(arr3, sz3)<<endl;


}