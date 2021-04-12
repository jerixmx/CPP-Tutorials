#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

int getNum()
{
  int num = 0;

  do
  {
    cout << "input 3-digit number: ";
    cin >> num;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
  }
  while(num < 100 || num > 999 || cin.fail()); //3-digit check
  return num;
}

int reverse(int num)
{
  int rev = 0 ;
  int remainder = 0;

  while(num != 0)
  {
    remainder = num % 10;
    rev = rev * 10 + remainder;
    num /= 10;
  }
  return rev;

}


int makeMagic(int num, int rev)
{
  int diff = 0;
  int revdiff = 0;
  int final = 0;

  cout << "reverse it: " << rev << endl;
  
  diff = num - rev;
  cout << "subtract: " << num << " - " << rev << " = " << diff << endl;

  revdiff = reverse(diff);
  cout << "reverse it: " << revdiff << endl;
  
  final = diff + revdiff;
  cout << "add: " << revdiff << " + " << diff << 
  " = " << final << endl;

  return final;
}

void checkMagic(int final)
{
  if(final == magic||final == magic2)
  {
    cout << "Magic!" << endl;
  }
}

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