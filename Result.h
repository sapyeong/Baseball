#pragma once
#include "Answer.h"
#include "Guess.h"

struct Result
{
	int strike;
	int ball;
	int out;

	void Calculate(Answer* answer, Guess* guess);
	void Print();
	int IsThreeStrike();
	int MoreThan4Points();
};
