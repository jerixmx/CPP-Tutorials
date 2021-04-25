#include "functions.h"

using std::cout;
using std::cin;
using std::endl;


float DegToRadians(float degrees)
{
  return (float) degrees * pi / 180;
}

char AskRepeat(std::string Askphrase)
{
  char yesno;
  do
  {
    cout << Askphrase << "(Y/N) ";
    cin >> yesno;
  }
  while(!cin >> yesno || (yesno != 'y' && yesno != 'n' && yesno!='Y' && yesno!='N'));
  return yesno;
}

void StartUp()
{
  cout << "\nWelcome to Artillery." << endl;
  cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
  cout << "You have one cannon, which you can shoot at any angle." << endl;
  cout << "You only have 10 cannonballs for this target.." << endl;
  cout << "Let's begin...\n\n";
}

int EnemyDistance()
{
  srand(time(NULL));
  return rand()%(max_distance-min_distance)+min_distance;
}

bool limitCheck(float return_var, std::string min_max, float limit)
{
  if(min_max.compare("max")==0)
  {
    return (return_var > limit);
  }
  else if((min_max.compare("min")==0))
  {
    return (return_var < limit);
  }
  return 0;
}

float GetAngle(std::string Askphrase, std::string min_max, float limit)
{
  float return_var=0;
  bool input_fail = 1; //guarantee of first execution

  while(limitCheck(return_var,min_max,limit) || input_fail)
  {
    cout << Askphrase;
    cin >> return_var;
    if(cin.fail() || return_var < 0)
    {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    else
    {
      input_fail = 0;
    }
  }
  return return_var;
}

float TimeInAir (float angle) 
{
  return 2 * velocity * sin(angle) / gravity;
}

float PlayerDistance (float angle, float time_in_air)
{
  return velocity * cos(angle) * time_in_air;
}

int Fire()
{
  char yesno ='y';
  int kills = 0;
  int enemy_distance = 0;
  float player_distance = 0; 
  int difference = 0;
  float player_angle = 0;
  int shots = 0;
  //while ++shots < 10
  while (shots < 10)
  {
    //Get random distance int
    enemy_distance = EnemyDistance();
    cout << "The enemy is " << enemy_distance << " feet away!!!" << endl;
    
    do
    {
      //Get angle in degrees from user and convert to radians
      player_angle = DegToRadians(GetAngle("What angle? ","max",90)); 
      
      //Increment shots taken
      shots++;

      //Calculate time in air
      //Calculate distance
      player_distance = PlayerDistance(player_angle,TimeInAir(player_angle));
      //Check int difference between enemy distance and player distance
      difference = player_distance-enemy_distance;
      if (difference != 0)
        cout << "You overshot by " << difference << endl;
    }
    while(difference != 0 && shots < 10);
    
    if (shots>=10)
    {
      cout << "You ran out of shots. \n";
      return kills;
    }

    //If zero
    if (difference == 0)
    {
      //Increment kills
      kills++;
      
      //Notify hit
      cout << "You hit him!!!" << endl;

      //Show number of shots 
      cout << "It took you " << shots << " shots." << endl;

      //Show number of enemies killed
      cout << "You have killed " << kills << " enemy." << endl;

      //If shots<10
      if ( shots < 10)
      {
        while(yesno=='y'||yesno=='Y')
        {
          Fire();
          //Ask to play again
          yesno=AskRepeat("I see another one, are you ready?"); //replace with ask phrase
          //replenish shots;
          shots = 0;
        }
        if (yesno == 'n' || yesno == 'N')
        {
          return kills;
        }
      }
      else
      {
        return kills;
      }

    }  

  }
  return kills;
}