/*
Ask score for 1-4 assignment
Get average for assignments
Ask score for midterm, final, section grade
Calculate final grade
Show final grade
*/

#include "functions.h"

int main(){
  //Get Average of Assignments and Scores for other Components
  float* Scores = ScoresOverall();

  //Use FinalGrade function to multiply scores by their weights
  cout << "The final grade is: " << FinalGrade(Scores, 4) << endl;
}