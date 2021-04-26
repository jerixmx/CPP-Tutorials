#include "functions.h"

using std::cout;
using std::endl;


int main()
{
  char yesno = 'y';
  //Display intro script
  StartUp();

  //Game
  do
  {
    //Set to zero to reset kills per game.
    int kills = 0; 

    kills=Fire(kills);
    
    cout << "\nYou killed " << kills << " of the enemies this time." << endl;
    cout << "\n=============\n++GAME OVER++\n=============\n\n";
    
    yesno=AskRepeat("Want to play again? "); 
  }
  while(yesno=='y'||yesno=='Y');

  cout << "\nThanks for playing Artillery!\n\n";

}