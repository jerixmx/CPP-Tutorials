#include <limits>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int GetInt(std::string Askphrase)
{
  int return_var=0;
  bool input_fail = 1; //guarantee of first execution

  while(input_fail)
  {
    cout << Askphrase;
    cin >> return_var;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    else
    {
      input_fail = 0;
    }
  }
  while(!cin>>return_var);
  return return_var;
}

bool limitCheck(int return_var, std::string min_max, int limit)
{
  if(min_max.compare("max")==0)
  {
    return (return_var > limit);
  }
  else if((min_max.compare("min")==0))
  {
    return (return_var < limit);
  }
  return 0;
}

int GetInt(std::string Askphrase, std::string min_max, int limit)
{
  int return_var=0;
  bool input_fail = 1; //guarantee of first execution

  while(limitCheck(return_var,min_max,limit) || input_fail)
  {
    cout << Askphrase;
    cin >> return_var;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    else
    {
      input_fail = 0;
    }
  }
  return return_var;
}

int main()
{
  int check=0;
  check = GetInt("Enter number: ");
  cout << check << endl;
  check = GetInt("Enter below 50: ","max", 50);
  cout << check << endl;
  check = GetInt("Enter above 50: ","min", 50);
  cout << check << endl;
}