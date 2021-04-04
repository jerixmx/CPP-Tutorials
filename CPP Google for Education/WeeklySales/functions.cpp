#include "functions.h"

int AskInput()
{
  int shoes=0;
  std::cout<<"How many shoes were sold this week?\n";
  std::cin>>shoes;
  return shoes;
}
int GetInput()
{
  int shoes=0;
  shoes=AskInput();
  
  while(!std::cin>>shoes)
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
      shoes=AskInput();
    }
  
  return shoes;
}
float CalcMethod1()
{

  return straight_salary;
}
float CalcMethod2(int WeeklySales)
{
  return hrs_per_wk*hrly_rate + WeeklySales*hrly_commission_rate;
}
float CalcMethod3(int WeeklySales,int shoes)
{
  return WeeklySales*commission_rate+shoes*commission_amt;
}

std::string MethodReference (int i){
  std::string method;
  switch(i)
  {
    case 0:
      method="Straight Salary";
      break;
    case 1:
      method="Hourly+Commission";
      break;
    case 2:
      method="Commission-based";
      break;
    default:
      break;
  }
  return method;
}


void PrintSalary(float Salary[], int size)
{
 
  for(int i=0;i<size;i++)
  {
    std::cout<<" - "<<MethodReference(i)<<": $"<<std::setprecision(2)<<std::fixed<<Salary[i]<<std::endl;
  }
}

void ChooseMethod(float Salary[],int size)
{
  int max=0;
  std::string method;
  for(int i=1;i<size;i++)
  {
    if(Salary[i]>Salary[max]){
      max=i;
    }
  }
  method=MethodReference(max);
  std::cout<<"Opt for "<<method<<".\n";
}