#include "main.h"

using namespace std;

void Result::Calculate(int* answers, int* guesses)
{
	strike = 0;
	ball = 0;
	out = 0;

	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % 3;
		int k = (i + 2) % 3;

		if (answers[i] == guesses[i])
			strike++;
		else if (answers[i] == guesses[j] || answers[i] == guesses[k])
			ball++;
		else
			out++;
	}
}

void Result::Print()
{
	cout << "[S]" << strike << " [B]" << ball << " [O]" << out << endl;
}

int Result::IsThreeStrike()
{
	if (strike == STRIKE_TO_FINISH)
		return TRUE;
	else
		return FALSE;
}

int Result::MoreThan4Points()
{
	int point = strike * 2 + ball;

	return point >= 4 ? TRUE : FALSE;
}
