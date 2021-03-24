#include "functions.h"

int randGen()
{
  int random_no;
  srand (time(NULL));
  random_no=rand()%101;//0-100
  return random_no;
}

bool HigherLower(int guess, int random_no)
{
  if(guess>random_no){
    std::cout<<"That's higher! Guess again!"<<std::endl;
    return true;
  } else 
  {
    std::cout<<"That's lower! Guess again!"<<std::endl;
    return false;
  }
}

int askAgain(int guess)
{
  while(std::cin.fail()||guess<0||guess>100)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout<<"Guess should be a number within 0 to 100."<<std::endl;
    std::cin>>guess;
  }
  return guess;  
}