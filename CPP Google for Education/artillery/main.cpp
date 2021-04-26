#include "functions.h"

using std::cout;
using std::endl;


int main()
{
  char yesno = 'y';
  StartUp(); // This displays the introductory script.

  do
  {
    int killed = 0;
    killed=Fire(killed);
    cout << "\nYou killed " << killed << " of the enemies this time." << endl;
    cout << "\n=============\n++GAME OVER++\n=============\n\n";
    yesno=AskRepeat("Want to play again? "); 
    //reset
  }
  while(yesno=='y'||yesno=='Y');
  cout << "\nThanks for playing Artillery!\n\n";
}