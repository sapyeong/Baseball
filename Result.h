#pragma once
#include "Answer.h"
#include "Guess.h"

class Result
{
private:
	int strike;
	int ball;
	int out;

public:
	void Calculate(Answer* answer, Guess* guess);
	void Print();
	int IsThreeStrike();
	int MoreThan4Points();
};
