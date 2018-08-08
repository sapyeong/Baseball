#include <iostream>
#include <stdlib.h>
#include "Result.h"

using namespace std;

#define TRUE 1 // 전처리기 지시어
#define MAX_VALUE 10
#define STRIKE_TO_FINISH 3
#define DIGIT 3

//typedef struct 
//{
//	int Strike;
//	int Ball;
//	int Out;
//}Result;


int main()
{
	// 1. 0~9 사이의 중복되지 않는 세 개의 난수를 생성한다. (정답)
	int answers[DIGIT];

	while (TRUE)
	{
		for (int i = 0; i < DIGIT; i++)
			answers[i] = rand() % MAX_VALUE;

		if (answers[0] != answers[1] && answers[1] != answers[2] && answers[2] != answers[0])
			break;
	}

	cout << "[정답] ";
	for (int i = 0; i < DIGIT; i++)
		cout << answers[i] << ' ';
	cout << endl;


	while (TRUE)
	{
		// 2. 사용자가 세 개의 숫자를 입력한다. (추측)
		int guesses[DIGIT];

		for (int i = 0; i < DIGIT; i++)
		{
			cin >> guesses[i];
			getwchar(); // 엔터를 지움
		}

		cout << "[추측] ";
		for (int i = 0; i < DIGIT; i++)
			cout << guesses[i] << ' ';
		cout << endl;


		// 3. 결과를 계산한다.
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


		// 4. 결과를 출력한다.
		cout << "[S]" << result.strike << " [B]" << result.ball << " [O]" << result.out << endl;


		// 5. 3스트라이커가 아니면 2번으로 돌아간다.
		if (result.strike == STRIKE_TO_FINISH)
			break;
	}

	return 0;
}