#include "functions.h"
char yn ='y';
using std::cout;
using std::cin;
using std::endl;


int main()
{
  while(yn=='y'||yn=='Y')
  {
    int secs;

    // Ask no of secs
    secs=getSecs();

    //Convert to hrs,mins,secs

    int* time=converter(secs);
    
    //Print hrs, mins, secs
    printer(time);
    
    yn=AskRepeat("Check another?",yn); //replace with ask phrase
  }
}