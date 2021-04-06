#include "functions.h"

float Average(float scores[], int size)
{
  float r_total=0;
  for(int i = 0; i < 4 ; i++)
  {
    r_total+=scores[i];
  }
  float ave=r_total/4;
  return ave;
}

float AssignmentAve()
{
  const char *assignment_order[4] = {"first","second","third","fourth"};

  float ScoresAssignment[4] = {0,0,0,0};
  for(int i = 0; i < 4 ; i++)
  {
    cout<<"Enter the score for the "<<assignment_order[i]<<" assignment. ";
    cin >> ScoresAssignment[i];
  }
  return Average(ScoresAssignment,4);
}

float* ScoresOverall(){
  const char *others[3] = {"midterm","final","section grade"};
  //Assignments, Midterms, Finals, Section Grade:
  static float Scores[4] = {0,0,0,0};

  //Get Assignment Scores and their Average then assign it as first score in the array.
  Scores[0]=AssignmentAve();

  //Get scores for other components
  for(int i = 0; i < 3 ; i++)
  {
    cout<<"Enter the score for the "<<others[i]<<". ";
    //Scores[0] already taken by Assignments
    cin>>Scores[i+1];
  }
  return Scores;
}

float FinalGrade(float Scores[],int size)
{
  const float Weights[]={0.40,0.15,0.35,0.10};
  float r_total = 0;
  for(int i = 0; i < size ; i++ )
  {
    r_total+=(Scores[i]*Weights[i]);
  }
  return r_total;
}