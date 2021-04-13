#include "functions.h"

char yn ='y';
using std::cout;
using std::cin;
using std::endl;


int main()
{

  while(yn=='y'||yn=='Y')
  {
    //Get 3 digit number
    int* num = digits();

    //rearrange ABC to BCA and CAB
    num = rearrange(num);

    //Get remainder from 11 and set as XYZ
    num = XYZ(num);

    //Add: X+Y, Y+Z, Z+X
    num = sums(num);

    //+/-11 if odd and less than 9
    num = mod_sum(num);

    //Divide each by half
    num = div2(num);
    
    cout << "\nThat's your number!\n";

    //Delete dynamically allocated memory for next iteration
    delete[] num;

    yn=AskRepeat("Check another?"); //replace with ask phrase
  }
}