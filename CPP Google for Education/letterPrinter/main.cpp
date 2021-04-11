#include "functions.h"

using std::cout;

int main()
{
  std::string str_to_print=getString();
  int size = str_to_print.size();
  for(int i = 0; i < size; i++)
  {
    char letter=toupper(str_to_print[i]);
    if(letter!=' ')
    {
      plotter(letter,selector(letter));
    }
    cout<<"\n";
  }
}