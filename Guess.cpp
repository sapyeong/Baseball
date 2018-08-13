#include "main.h"

void Guess::Input()
{
	for (int i = 0; i < DIGIT; i++)
	{
		std::cin >> numbers[i];
		getwchar(); // 엔터를 지움
	}

	Print();
}
