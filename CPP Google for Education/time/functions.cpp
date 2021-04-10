#include "functions.h"

using std::cout;
using std::cin;
using std::endl;

int getSecs()
{
  int secs;
  do
  {
    cout<< "Number of seconds: ";
    cin>>secs;
  }
  while(!cin>>secs);
  return secs;
}

int* converter(int secs)
{
  int left_mins=0;
  int* time = new int[3]; //{hrs,mins,secs}
  time[0]=secs/(60*60); //hrs
  left_mins = secs%(60*60);
  time[1]=left_mins/60; //mins
  time[2]=left_mins%60; //secs
  return time;
}

void printer(int* time)
{
  cout<<"Hours: "<<time[0]<<endl;
  cout<<"Minutes: "<<time[1]<<endl;
  cout<<"Seconds: "<<time[2]<<endl;
}


char AskRepeat(std::string Askphrase, char yn)
{
  do
  {
    cout<<Askphrase<<"(y/n) ";
    cin>>yn;
  }while(!cin>>yn||(yn!='y'&&yn!='n'&&yn!='Y'&&yn!='N'));
  return yn;
}
