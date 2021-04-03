/*
Brief:Ways to rearrange a book.
Use permutation.
*/
#include <iostream>

int permutations(int n){
  if(n<=1){
    return 1;
  }else
  {
    return n*permutations(n-1);
  }

}


int main()
{
  int books=6;
  std::cout<<permutations(books)<<std::endl;
  
}
