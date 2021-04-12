#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

std::map<char,std::string> monthMap()
{  
  std::map<char,std::string> month;
  month['A']="January";
  month['B']="February";
  month['C']="March";
  month['D']="April";
  month['E']="May";
  month['F']="June";
  month['G']="July";
  month['H']="August";
  month['I']="September";
  month['J']="October";
  month['K']="November";
  month['L']="December";
  
  return month;
}
std::map<char,int> dayMap()
{ 
  std::map<char,int> day;
  day['Q']=0;
  day['R']=1;
  day['S']=2;
  day['T']=3;
  day['U']=4;
  day['V']=5;
  day['W']=6;
  day['X']=7;
  day['Y']=8;
  day['Z']=9;

  return day;
}

std::map<char,int> yearMap()
{ 
  std::map<char,int> year;
  year['A']=1;
  year['B']=2;
  year['C']=3;
  year['D']=4;
  year['E']=5;
  year['F']=6;
  year['G']=7;
  year['H']=8;
  year['I']=9;
  year['J']=10;
  year['K']=11;
  year['L']=12;
  year['M']=13;
  year['N']=14;
  year['O']=15;
  year['Q']=16;
  year['Q']=17;
  year['R']=18;
  year['S']=19;
  year['T']=20;
  year['U']=21;
  year['V']=22;
  year['W']=23;
  year['X']=24;
  year['Y']=25;
  year['Z']=26;
  return year;
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