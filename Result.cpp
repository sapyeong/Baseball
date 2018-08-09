#include "main.h"

using namespace std;

void CalculateResult(Result* result, int* answers, int* guesses)
{
	result->strike = 0;
	result->ball = 0;
	result->out = 0;

	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % 3;
		int k = (i + 2) % 3;

		if (answers[i] == guesses[i])
			result->strike++;
		else if (answers[i] == guesses[j] || answers[i] == guesses[k])
			result->ball++;
		else
			result->out++;
	}
}

void PrintResult(Result* result)
{
	// (*result).strike <-> result->strike

	cout << "[S]" << result->strike << " [B]" << result->ball << " [O]" << result->out << endl;
}

int IsThreeStrike(Result* result)
{
	if (result->strike == STRIKE_TO_FINISH)
		return TRUE;
	else
		return FALSE;
}

int MoreThan4Points(Result* result)
{
	int point = result->strike * 2 + result->ball;

	return point >= 4 ? TRUE : FALSE;
}
