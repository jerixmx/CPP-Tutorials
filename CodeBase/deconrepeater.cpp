#include "functions.h"
char yn ='y';
using std::cout;
using std::cin;
using std::endl;

int main()
{

  while(yn=='y'||yn=='Y')
  {
    std::cout<<"Test\n";//replace with code to repeat
    
    yn=AskRepeat("Check another?",yn); //replace with ask phrase
  }
}