#include<iostream>

char yn ='y';

void AskRepeat(std::string Askphrase)
{
  do
  {
    std::cout<<Askphrase<<"(y/n) ";
    std::cin>>yn;
  }while(!std::cin>>yn||(yn!='y'&&yn!='n'));
}

int main()
{
  while(yn=='y')
  {
    
    std::cout<<"Test"; //replace with code to repeat
    
    AskRepeat("Check another?"); //replace with ask phrase
  }
}