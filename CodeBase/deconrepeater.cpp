#include "functions.h"
char yn ='y';

int main()
{

  while(yn=='y')
  {
    std::cout<<"Test\n";//replace with code to repeat
    
    yn=AskRepeat("Check another?",yn); //replace with ask phrase
  }
}