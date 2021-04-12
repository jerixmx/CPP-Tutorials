#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

char AskRepeat(std::string Askphrase)
{
  char yn;
  do
  {
    cout<<Askphrase<<"(y/n) ";
    cin>>yn;
  }while(!cin>>yn||(yn!='y'&&yn!='n'&&yn!='Y'&&yn!='N'));
  return yn;
}