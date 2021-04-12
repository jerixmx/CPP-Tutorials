#include "functions.h"


char yn ='y';
using std::cout;
using std::cin;
using std::endl;

int main()
{
  char m;
  char d;
  char dd;
  char y;

  std::map<char,std::string> month=monthMap();
  std::map<char,int> day = dayMap();
  std::map<char,int> year = yearMap();

  while(yn == 'y' || yn == 'Y')
  {
      cout << "Expiration code: ";
      cin >> m >> d >> dd >> y;
      
      cout << "Expires on " << month[m] << " " << day[d] << day[dd] << ", " << year[y]+1995 << endl;
    
    yn = AskRepeat("Check another?"); //replace with ask phrase
  }
}