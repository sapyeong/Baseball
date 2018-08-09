#pragma once

#pragma region »ó¼ö
#define TRUE 1
#define FALSE 0
#define MAX_VALUE 10
#define STRIKE_TO_FINISH 3
#define DIGIT 3  
#pragma endregion

#include <iostream>
#include "Result.h"

void PrintNumbers(const char*, int*);
void GenerateAnswers(int* answers);
void InputGuesses(int* guesses);
void CalculateResult(Result* result, int* answers, int* guesses);
void PrintResult(Result* result);
int IsThreeStrike(Result* result);
int MoreThan4Points(Result* result);
