#include "main.h"

void InputGuesses(int* guesses)
{
	for (int i = 0; i < DIGIT; i++)
	{
		std::cin >> guesses[i];
		getwchar(); // 엔터를 지움
	}

	PrintNumbers("[추측] ", guesses);
}