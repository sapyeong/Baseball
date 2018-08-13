#include "main.h"

void Answer::Generate()
{
	while (TRUE)
	{
		for (int i = 0; i < DIGIT; i++)
			numbers[i] = rand() % MAX_VALUE;

		if (numbers[0] != numbers[1] && numbers[1] != numbers[2] && numbers[2] != numbers[0])
			break;
	}

	Print();
}

void Answer::Print()
{
	std::cout << "[Á¤´ä] ";
	for (int i = 0; i < DIGIT; i++)
		std::cout << numbers[i] << ' ';
	std::cout << std::endl;
}
