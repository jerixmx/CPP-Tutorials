// Get input 1 and 2 - done
// Check which is higher - done
// Divide higher by smaller 
// Get quotient and remainder while remainder is not equal to zero
// When remainder =0, gcd is quotient


#include "functions.h"

int main(){
  std::vector<int> numbers={0,0};
  numbers=getNums();
  numbers=arrangeNums(numbers);
  //std::cout<<numbers[0]<<" "<<numbers[1]<<std::endl; //test
  std::cout<<"Greatest common denominator is "<<gcd(numbers)<<".\n";
  return 0;
}