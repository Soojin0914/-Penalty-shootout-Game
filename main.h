#include "Score.h"
#include <iostream>

using namespace std;

#pragma once

#define TRUE 1
#define FALSE 0
#define MAX_VALUE 5
#define MINIMUM_CHANCE 4

int Number(const char* who);
int Input();
void PrintScore(const char* message, int computer, int user);
int ComputerTurn(int kicker, int keeper, Score* score);
int UserTurn(int kicker, int keeper, Score* score);
int FinalScore(int opportunity, Score* score);