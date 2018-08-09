#include <iostream>
#include <stdlib.h>
#include "main.h"

using namespace std;

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
		Result result;
		CalculateResult(&result, answers, guesses);


		// 4. ����� ����Ѵ�.
		PrintResult(&result);


		// 5. 3��Ʈ����Ŀ�� �ƴϸ� 2������ ���ư���.
		int isValidReult;
		isValidReult = IsThreeStrike(&result);
		//isValidReult = MoreThan4Points(&result);

		if (isValidReult)
			break;
	}

	return 0;
}