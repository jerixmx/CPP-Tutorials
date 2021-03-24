
// Figure out how to generate a random number within a given range of values.
// Create a main function that processes one guess from the player, and provides hints.
// Add what we need to allow for multiple guesses until the player guesses the number.

#include "functions.h"

int main()
{
  //random number generation
  int random_no=0;
  random_no=(randGen());
  
  std::cout<<random_no<<std::endl; //for testing
  
  //ask for guess
  int guess=0;
  std::cout<<"Guess the number. (0-100)"<<std::endl;
  std::cin>>guess;
  guess=askAgain(guess); //checks input validity
  
  //process guess
  while(guess!=random_no){
    (HigherLower(guess,random_no));
    std::cin>>guess;
    guess=askAgain(guess);
  }

  std::cout<<"You are correct!"<<std::endl;

  return 0;
}