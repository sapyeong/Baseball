#include <iostream>
#include <stdlib.h>
#include "Result.h"

using namespace std;

#pragma region 상수
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

	PrintNumbers("[정답] ", answers);
}

void InputGuesses(int* guesses)
{
	for (int i = 0; i < DIGIT; i++)
	{
		cin >> guesses[i];
		getwchar(); // 엔터를 지움
	}

	PrintNumbers("[추측] ", guesses);
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
	// 1. 0~9 사이의 중복되지 않는 세 개의 난수를 생성한다. (정답)
	int answers[DIGIT];
	GenerateAnswers(answers);


	while (TRUE)
	{
		// 2. 사용자가 세 개의 숫자를 입력한다. (추측)
		int guesses[DIGIT];
		InputGuesses(guesses);


		// 3. 결과를 계산한다.
		Result result = CalculateResult(answers, guesses);


		// 4. 결과를 출력한다.
		PrintResult(result);


		// 5. 3스트라이커가 아니면 2번으로 돌아간다.
		int isValidReult;
		isValidReult = IsThreeStrike(result);
		//isValidReult = MoreThan4Points(result);

		if (isValidReult)
			break;
	}

	return 0;
}