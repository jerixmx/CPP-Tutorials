#include <iostream>
/* Brief: Optional: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

    It should ask him what his earth weight is.
    Ask him to enter a number for the planet he wants to fight on.
    It should then compute his weight on the destination planet.

Here is the table of conversion:
# 	Planet 	Relative Gravity
1 	Mercury 	0.38
2 	Venus 	0.91
3 	Mars 	0.38
4 	Jupiter 	2.34
5 	Saturn 	1.06
6 	Uranus 	0.92
7 	Neptune 	1.19

*/

int main() {
  double weight_earth = 50;
  int planet_number = 1;
  double gravity_relative = 0.38;
  double weight_planet=50;

  std::cout<<"What is your earth weight?\n";
  std::cin>>weight_earth;

    std::cout<<"Which planet number do you want to fight on?\n";
  std::cin>>planet_number;

  switch (planet_number){
    case 1:
      gravity_relative=0.38;
      break;
    case 2:
      gravity_relative=0.91;
      break;
    case 3:
      gravity_relative=0.38;
      break;
    case 4:
      gravity_relative=2.34;
      break;
    case 5:
      gravity_relative=1.06;
      break;
    case 6:
      gravity_relative=0.92;
      break;
    case 7:
      gravity_relative=1.19;
      break;
    default:
      break;
  }

  weight_planet=weight_earth*gravity_relative;

  std::cout<<"Your weight on Planet "<<planet_number<<" is "<<weight_planet<<".\n";
}