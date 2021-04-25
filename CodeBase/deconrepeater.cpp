#include "functions.h"

char yesno ='y';
using std::cout;
using std::cin;
using std::endl;

int main()
{

  while(yesno=='y'||yesno=='Y')
  {
    std::cout<<"Test\n";//replace with code to repeat
    
    yesno=AskRepeat("Check another?"); //replace with ask phrase
  }
}