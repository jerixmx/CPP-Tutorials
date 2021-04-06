#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//divisibility test: 2,3,5,7

bool isPrime(int n)
{
  if (n==1)
  {
    return false;
  }
  if(n == 2 || n == 3)
  {
    return true;
  }
  if(n % 2 == 0 || n % 3 == 0)
  {
    return false;
  }else
  {
    int sqrtn=sqrt(n);
    int max_k=n/6;
    if(sqrtn/6>1)
    {
      max_k = sqrtn/6;
    }
    for(int k = 1;k < max_k;k++)
    {
      if(n%(6*k-1) == 0)
      {
        return false;
      }else if(n%(6*k-1) == 0)
      {
        return false;
      }
    }
  }

  return true;
}



int main() {

    int T = 0;
    cin >> T;
    int num=0;

    for(int i = 0; i < T ; i++)
    {
      cin >> num;
      isPrime(num) ? cout << "Prime\n" : cout <<"Not Prime\n";
    }

}