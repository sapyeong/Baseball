#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	// 1. 0~9 ������ �ߺ����� �ʴ� �� ���� ������ �����Ѵ�. (����)
	Answer answer;
	answer.Generate();


	while (TRUE)
	{
		// 2. ����ڰ� �� ���� ���ڸ� �Է��Ѵ�. (����)
		Guess guess;
		guess.Input();

		// answer.numbers[0] = 5; <- ���� �� �ִ� ����� ����.


		// 3. ����� ����Ѵ�.
		Result result;
		result.Calculate(&answer, &guess);
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