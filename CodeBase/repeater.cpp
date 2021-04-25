#include<iostream>

char yesno ='y';

void AskRepeat(std::string Askphrase)
{
  do
  {
    std::cout<<Askphrase<<"(y/n) ";
    std::cin>>yesno;
  }while(!std::cin>>yesno||(yesno!='y'&&yesno!='n'));
}

int main()
{
  while(yesno=='y')
  {
    
    std::cout<<"Test"; //replace with code to repeat
    
    AskRepeat("Check another?"); //replace with ask phrase
  }
}