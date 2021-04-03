//Brief: Get the number of horses, pigs, and rabbits bought.
//100 animals bought
//Horse: $10; Pigs: $3; Rabbits: $0.50
//Based on most expensive one, max horse is 10.
//Max Pigs is (100-num_Horses)/3
//Max Rabbits is (100-num_horses-num_pigs)/.5
//Rabbits are 100-num_horses-num_pigs
//if total_cost==100, break

#include <iostream>

int main(){
  int horses{0},pigs{0},rabbits{0};

  for(int horses=10;horses>=0;horses--)
  {
    int max_pigs=(100-horses)/3;
    float total=10*horses+3*pigs+0.50*rabbits;

    for(int pigs=max_pigs;pigs>=0;pigs--)
    {
      rabbits=100-horses-pigs;
      total=10*horses+3*pigs+0.50*rabbits;
      if (total==100){
        std::cout<<"Horses: "<<horses<<"\tPigs: "<<pigs<<"\tRabbits: "<<rabbits<<std::endl;
      }
    }
  }

}
