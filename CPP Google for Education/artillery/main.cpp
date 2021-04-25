#include "functions.h"

char yesno ='y';

int main()
{
  StartUp(); // This displays the introductory script.
  int killed = 0;
  while(yesno=='y'||yesno=='Y')
  {
    killed=Fire();
    yesno=AskRepeat("I see another one, care to shoot again?"); //replace with ask phrase
  }
}