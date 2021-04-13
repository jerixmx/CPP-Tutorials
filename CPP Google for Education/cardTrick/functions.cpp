#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

int* digits()
{
  int num = 0;
  int* digits = new int[3];
  do
  {
    cout << "Enter 3-digit number: ";
    cin>>num;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
  }
  while(cin.fail() || num < 100 || num > 999);
  digits[0] = num / 100;
  digits[1] = (num % 100) / 10;
  digits[2] = num%(10*digits[0] + digits[1]);
  return digits;
}

int* rearrange(int* num)
{
  int* rearranged = new int[3];
  int A =num[0];
  int B = num[1];
  int C = num[2];

  rearranged[0] = 100*A + 10*B + C;
  rearranged[1] = 100*B + 10*C + A;
  rearranged[2] = 100*C + 10*A + B;
  cout << "ABC: " << rearranged[0] << endl;
  cout << "BCA: " << rearranged[1]  << endl;
  cout << "CAB: " << rearranged[2] << endl;

  return rearranged;
}

int* XYZ(int* rearranged)
{
  int* XYZ=new int[3];
  XYZ[0] = rearranged[0] % 11;
  XYZ[1] = rearranged[1] % 11;
  XYZ[2] = rearranged[2] % 11;
  cout << "Remainders when divided by 11: \n";
  cout << "ABC % 11 = " << XYZ[0] << endl;
  cout << "BCA % 11 = " << XYZ[1] << endl;
  cout << "CAB % 11 = " << XYZ[2] << endl;

  return XYZ;
}

int* sums(int* xyz)
{
  int X = xyz[0];
  int Y = xyz[1];
  int Z = xyz[2];

  int* sums=new int[3];
  sums[0] = X+Y;
  sums[1] = Y+Z;
  sums[2] = X+Z;
  cout << "Sums: \n";
  cout << "X + Y = " << sums[0] << endl;
  cout << "Y + Z = " << sums[1] << endl;
  cout << "X + Z = " << sums[2] << endl;
  return sums;
}

int* mod_sum(int* sums)
{
  cout<<"If odd and not 9, +/-11: \n";
  for(int i = 0; i < 3; i++)
  {
    if(sums[i]%2 == 1 && sums[i] != 9)
    {
      sums[i] = sums[i]+11 < 20 ? sums[i]+11 : sums[i]-11;
    }
    cout << sums[i] << endl;
  }
  return sums;
}

int* div2(int* sums)
{
  cout << "Dividing by two: \n";
  for(int i = 0; i < 3; i++)
  {
    sums[i]/=2;
    cout << sums[i]<<endl;
  }
  return sums;
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