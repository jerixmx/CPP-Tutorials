#include "functions.h"

std::vector<int> getNums()
{
  std::vector<int> numbers={0,0};
  
  std::cout<<"Enter numbers. Ex: 1 2"<<std::endl;
  std::cin>>numbers[0]>>numbers[1];
  
  while(!std::cin>>numbers[0]>>numbers[1]){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout<<"Enter numbers. Ex: 1 2"<<std::endl;
    std::cin>>numbers[0]>>numbers[1];   

  } 
  return numbers;
}

std::vector<int> arrangeNums(std::vector<int> numbers)
{
  if(numbers[0]<numbers[1])
  {
    int temp=numbers[1];
    numbers[1]=numbers[0];
    numbers[0]=temp;
  }
  return numbers;
}

int gcd(std::vector<int> numbers)
{
  int GCD=1;
  int a,b,q,r=0;
  a=numbers[0];
  b=numbers[1];
  q=a/b;
  r=a%b;
  while(r!=0){
    a=b;
    b=r;
    q=a/b;
    r=a%b;
  }
  return b;
}