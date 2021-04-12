#include "functions.h"
#include <limits>

char yn ='y';
using std::cout;
using std::cin;
using std::endl;

int main()
{

  while(yn == 'y' || yn == 'Y')
  {
    int num = 0;
    int rev = 0;
    int final = 0;
    
    cout << "Make a 3 digit number become 1089... or 198.\n";
  
    //Get number and its reverse until num>=reverse
    do
    {
      num = getNum();
      rev = reverse(num);
      //Check whether first digit greater than last
      if(rev >= num)
      {
        cout << "First digit must be greater than last.\n";
      }
    }
    while(rev >= num);
    
    //Transform number to magic number
    final=makeMagic(num, rev);

    //Check whether 198 or 1089
    checkMagic(final);
        
    yn=AskRepeat("Check another?"); //replace with ask phrase
  }
}