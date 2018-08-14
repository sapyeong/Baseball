#include "main.h"
#include "NumberContainer.h"

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

const char* Answer::GetPrefix()
{
	return "[Á¤´ä] ";
}


