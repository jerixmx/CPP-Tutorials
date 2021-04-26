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
  cout << "You have one cannon, which you can swing from zero to 45 degrees." << endl;
  cout << "You can only fire 10 cannonballs per target.." << endl;
  cout << "Let's begin...\n";
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
    if(cin.fail() || return_var < 0 || limitCheck(return_var,min_max,limit))
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

int Fire(int kills)
{
  char yesno ='y';
  int enemy_distance = 0;
  float player_distance = 0; 
  int difference = 0;
  float player_angle = 0;
  int shots = 0;
  bool killed = 0;
  //while ++shots < 10
  do
  {
    //Get random distance int
    enemy_distance = EnemyDistance();
    cout << "\nThe enemy is " << enemy_distance << " feet away!!!" << endl;
    
    do
    {
      //Get angle in degrees from user and convert to radians
      player_angle = DegToRadians(GetAngle("What angle? (0-45) ","max",45)); 
      
      //Increment shots taken
      shots++;

      //Calculate time in air
      //Calculate distance
      player_distance = PlayerDistance(player_angle,TimeInAir(player_angle));
      //Check int difference between enemy distance and player distance
      difference = player_distance-enemy_distance;
      if (difference != 0)
      {
        cout << "\nYou overshot by " << difference << endl;
        if(shots<10)
          cout << "\nYou have " << 10 - shots <<" shots remaining\n";
      }
    }
    while(difference != 0 && shots < 10);
    
    if (shots>=10 && difference != 0)
    {
      cout << "\nYou ran out of canonballs. You must retreat. \n";
      shots = 0;
      killed = 1;
      break;
    }

    //If zero
    if (difference == 0)
    {
      //Increment kills
      kills++;
      
      //Notify hit
      cout << "\n**You hit him!!!**" << endl;

      //Show number of shots 
      std::string str = (shots==1) ? " shot" : " shots";
      cout << "It took you " << shots << " " << str << endl;

      //Show number of enemies killed
      str = (kills == 1) ? "enemy" : "enemies";
      cout << "You have killed " << kills << " " << str << endl;


      cout << "\nI see another one. Are you ready? (Y/N) ";
      cin >> yesno;
      shots = 0;      
    }
    
  }
  while (killed == 0 && (yesno == 'y' || yesno == 'Y') );
  if (killed ==0)
  {
    cout << "\nYou were killed by the enemy.\n";
  }
  
  return kills;
}