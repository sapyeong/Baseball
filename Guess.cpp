#include "main.h"

void Guess::Input()
{
	for (int i = 0; i < DIGIT; i++)
	{
		std::cin >> numbers[i];
		getwchar(); // ���͸� ����
	}

	Print();
}
