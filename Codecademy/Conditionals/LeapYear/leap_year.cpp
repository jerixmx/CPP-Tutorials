/* Brief: Optional: Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

    Takes a year as input.
    Checks to see if the year is a four-digit number.
    Displays whether or not the year falls on a leap year.

There are 3 criteria that must be taken into account to identify a leap year:

    If the year can be evenly divided by 4 then it is a leap year, however…
    If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
    If that year is evenly divisible by 400, then it is a leap year.

Take some time to research and brainstorm before starting to write the code!
*/

#include <iostream>
#include<limits>
using namespace std;

int main() {
  int year = 1000;
  bool leap_year = true;
  while (true){
    std::cout <<"Enter year:\n";
    std::cin>>year;
    if (year >=1000 && year<10000){
      if(year%4==0)
      { 
        if(year%100==0 && year%400!=0){
        leap_year=false;
        } else if(year%100==0 && year%400==0){
          leap_year=true;
        } else {
          leap_year=true;
        }
      }    else{
        leap_year=false;}

      if(leap_year==true){
        std::cout<<year<<" is a Leap Year.\n";
      }else{
        std::cout<<year<<" is NOT a Leap Year.\n";
      }  
    } 
	else{
	if(cin.fail())
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
	std::cout<<"Year should be from 1000 to 9999.\n";
	year = 1000;
	}
  }
}