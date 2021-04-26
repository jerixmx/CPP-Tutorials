#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <string>

const float velocity = 200.0;
const float gravity = 32.2;
const float pi = 3.14159265;
const int max_distance = 1242;
const int min_distance = 43;

void StartUp();

int EnemyDistance();

bool OutOfBounds(float return_var, std::string min_max, float limit);
float GetAngle(std::string Askphrase, std::string min_max, float limit);

float DegToRadians(float degrees);
float TimeInAir (float angle);
float PlayerDistance (float angle, float time_in_air);

void Shoot (int enemy_distance, int &difference, int &shots);
void IfMissed (int difference, int shots);
void NotifyHit (int shots, int &kills);

void AskNewRound (char &yesno, int &shots);

int Fire (int kills);

char AskRepeat(std::string Askphrase);