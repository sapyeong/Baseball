#include "main.h"

void GenerateAnswers(int* answers)
{
	while (TRUE)
	{
		for (int i = 0; i < DIGIT; i++)
			answers[i] = rand() % MAX_VALUE;

		if (answers[0] != answers[1] && answers[1] != answers[2] && answers[2] != answers[0])
			break;
	}

	PrintNumbers("[Á¤´ä] ", answers);
}
