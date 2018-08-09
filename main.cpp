#include <iostream>
#include <stdlib.h>
#include "main.h"

using namespace std;

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
		Result result;
		CalculateResult(&result, answers, guesses);


		// 4. 결과를 출력한다.
		PrintResult(&result);


		// 5. 3스트라이커가 아니면 2번으로 돌아간다.
		int isValidReult;
		isValidReult = IsThreeStrike(&result);
		//isValidReult = MoreThan4Points(&result);

		if (isValidReult)
			break;
	}

	return 0;
}