#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

char AskRepeat(std::string Askphrase)
{
  char yesno;
  do
  {
    cout<<Askphrase<<"(y/n) ";
    cin>>yesno;
  }while(!cin>>yesno||(yesno!='y'&&yesno!='n'&&yesno!='Y'&&yesno!='N'));
  return yesno;
}