#include "main.h"

using namespace std;

void Result::Calculate(Answer* answer, Guess* guess)
{
	strike = 0;
	ball = 0;
	out = 0;

	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % 3;
		int k = (i + 2) % 3;

		if (answer->At(i) == guess->At(i))
			strike++;
		else if 
			(answer->At(i) == guess->At(j) || 
			answer->At(i) == guess->At(k))
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
