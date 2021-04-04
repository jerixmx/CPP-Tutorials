#include <iostream>
#include <limits>
#include <iomanip>


#define hrs_per_wk 40
#define straight_salary 600.00
#define hrly_rate 7.00
#define hrly_commission_rate 0.10
#define commission_rate 0.20
#define commission_amt 20.00
#define shoe_price 225



int GetInput();
std::string MethodReference (int i);
float CalcMethod1();
float CalcMethod2(int WeeklySales);
float CalcMethod3(int WeeklySales,int shoes); 
void PrintSalary(float Salary[], int size);
void ChooseMethod(float Salary[],int size);