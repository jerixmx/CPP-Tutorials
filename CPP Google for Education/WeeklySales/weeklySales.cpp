#include "functions.h"

int main()
{
  int WeeklySales=0;
  float Salary[3]={0.00};
  int shoes=GetInput();
  WeeklySales=shoe_price*shoes;
  Salary[0]=CalcMethod1();
  Salary[1]=CalcMethod2(WeeklySales);
  Salary[2]=CalcMethod3(WeeklySales,shoes); 
  ChooseMethod(Salary,3);
  PrintSalary(Salary,3);
}