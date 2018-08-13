#pragma once

struct Result
{
	int strike;
	int ball;
	int out;

	void Calculate(int* answers, int* guesses);
		void Result::Print();
	int IsThreeStrike();
	int MoreThan4Points();

	void Print();
};
