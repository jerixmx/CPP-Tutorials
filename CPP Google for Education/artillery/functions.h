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


char AskRepeat(std::string Askphrase);
void StartUp();
int EnemyDistance();
int Fire (int kills);