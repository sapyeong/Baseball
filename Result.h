#pragma once
#include "Answer.h"
#include "Guess.h"

class Result
{
protected:
	int strike;
	int ball;
	int out;

public:
	void Calculate(Answer* answer, Guess* guess);
	void Print();
	virtual int IsCorrect();
};
