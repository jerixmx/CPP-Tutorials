#include "functions.h"

char AskRepeat(std::string Askphrase, char yn)
{
  do
  {
    std::cout<<Askphrase<<"(y/n) ";
    std::cin>>yn;
  }while(!std::cin>>yn||(yn!='y'&&yn!='n'));
  return yn;
}