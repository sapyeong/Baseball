#include <iostream>
#include <stdlib.h>
#include "Result.h"

using namespace std;

#define TRUE 1 // ��ó���� ���þ�
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
	// 1. 0~9 ������ �ߺ����� �ʴ� �� ���� ������ �����Ѵ�. (����)
	int answers[DIGIT];

	while (TRUE)
	{
		for (int i = 0; i < DIGIT; i++)
			answers[i] = rand() % MAX_VALUE;

		if (answers[0] != answers[1] && answers[1] != answers[2] && answers[2] != answers[0])
			break;
	}

	cout << "[����] ";
	for (int i = 0; i < DIGIT; i++)
		cout << answers[i] << ' ';
	cout << endl;


	while (TRUE)
	{
		// 2. ����ڰ� �� ���� ���ڸ� �Է��Ѵ�. (����)
		int guesses[DIGIT];

		for (int i = 0; i < DIGIT; i++)
		{
			cin >> guesses[i];
			getwchar(); // ���͸� ����
		}

		cout << "[����] ";
		for (int i = 0; i < DIGIT; i++)
			cout << guesses[i] << ' ';
		cout << endl;


		// 3. ����� ����Ѵ�.
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


		// 4. ����� ����Ѵ�.
		cout << "[S]" << result.strike << " [B]" << result.ball << " [O]" << result.out << endl;


		// 5. 3��Ʈ����Ŀ�� �ƴϸ� 2������ ���ư���.
		if (result.strike == STRIKE_TO_FINISH)
			break;
	}

	return 0;
}