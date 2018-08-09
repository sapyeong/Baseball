#include <iostream>
#include <stdlib.h>
#include "Result.h"

using namespace std;

#pragma region ���
#define TRUE 1
#define FALSE 0
#define MAX_VALUE 10
#define STRIKE_TO_FINISH 3
#define DIGIT 3  
#pragma endregion

void PrintNumbers(const char* prefix, int* numbers)
{
	cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		cout << numbers[i] << ' ';
	cout << endl;
}

void GenerateAnswers(int* answers)
{
	while (TRUE)
	{
		for (int i = 0; i < DIGIT; i++)
			answers[i] = rand() % MAX_VALUE;

		if (answers[0] != answers[1] && answers[1] != answers[2] && answers[2] != answers[0])
			break;
	}

	PrintNumbers("[����] ", answers);
}

void InputGuesses(int* guesses)
{
	for (int i = 0; i < DIGIT; i++)
	{
		cin >> guesses[i];
		getwchar(); // ���͸� ����
	}

	PrintNumbers("[����] ", guesses);
}

Result CalculateResult(int* answers, int* guesses)
{
	Result result;
	result.strike = 0;
	result.ball = 0;
	result.out = 0;

	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % 3;
		int k = (i + 2) % 3;

		if (answers[i] == guesses[i])
			result.strike++;
		else if (answers[i] == guesses[j] || answers[i] == guesses[k])
			result.ball++;
		else
			result.out++;
	}

	result;
}

void PrintResult(Result result)
{
	cout << "[S]" << result.strike << " [B]" << result.ball << " [O]" << result.out << endl;
}

int IsThreeStrike(Result result)
{
	if (result.strike == STRIKE_TO_FINISH)
		return TRUE;
	else
		return FALSE;
}

int MoreThan4Points(Result result)
{
	int point = result.strike * 2 + result.ball;

	return point >= 4 ? TRUE : FALSE;
}

int main()
{
	// 1. 0~9 ������ �ߺ����� �ʴ� �� ���� ������ �����Ѵ�. (����)
	int answers[DIGIT];
	GenerateAnswers(answers);


	while (TRUE)
	{
		// 2. ����ڰ� �� ���� ���ڸ� �Է��Ѵ�. (����)
		int guesses[DIGIT];
		InputGuesses(guesses);


		// 3. ����� ����Ѵ�.
		Result result = CalculateResult(answers, guesses);


		// 4. ����� ����Ѵ�.
		PrintResult(result);


		// 5. 3��Ʈ����Ŀ�� �ƴϸ� 2������ ���ư���.
		int isValidReult;
		isValidReult = IsThreeStrike(result);
		//isValidReult = MoreThan4Points(result);

		if (isValidReult)
			break;
	}

	return 0;
}