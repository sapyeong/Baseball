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
		result.Calculate(answers, guesses);
		//result.Calculate(answers, guesses);

		
		// 4. ����� ����Ѵ�.
		result.Print();


		// 5. 3��Ʈ����Ŀ�� �ƴϸ� 2������ ���ư���.
		int isValidReult;
		isValidReult = result.IsThreeStrike();
		//isValidReult = result.MoreThan4Points();

		if (isValidReult)
			break;
	}

	return 0;
}