// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  for(int i=0;i<6;i++){
    for (int j=0;j<4;j++){
      cout <<setw(17)<<right<<"Hello World!";
    }
      cout<<endl;
    
  }
  return 0;
}
