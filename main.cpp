#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	// 1. 0~9 사이의 중복되지 않는 세 개의 난수를 생성한다. (정답)
	Answer answer;
	answer.Generate();


	while (TRUE)
	{
		// 2. 사용자가 세 개의 숫자를 입력한다. (추측)
		Guess guess;
		guess.Input();


		// 3. 결과를 계산한다.
		Result* result;

		result = new Result;
		//result = (Result*)malloc(sizeof(PointResult));

		result->Calculate(&answer, &guess);
		//result.Calculate(answers, guesses);

		
		// 4. 결과를 출력한다.
		result->Print();


		// 5. 3스트라이커가 아니면 2번으로 돌아간다.
		int isValidReult;
		isValidReult = result->IsCorrect();
		//isValidReult = result.MoreThan4Points();

		if (isValidReult)
			break;
	}

	return 0;
}