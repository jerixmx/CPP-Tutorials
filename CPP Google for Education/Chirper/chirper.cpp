#include "functions.h"
char yn ='y';

int main()
{
  int chirps{0};
  double temp{10.0};
  while(yn=='y')
  {
    
    //Get chirps
    std::cout<<"Enter number of chirps: ";
    std::cin>>chirps;
    temp=((double) chirps+40)/4;
    std::cout<<"The temperature is "<<std::setprecision(1)<<std::fixed<<temp<<" degrees.\n";
    
    yn=AskRepeat("Check another?",yn); //replace with ask phrase
  }
}