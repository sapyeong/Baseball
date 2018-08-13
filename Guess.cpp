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

void Guess::Print()
{
	std::cout << "[추측] ";
	for (int i = 0; i < DIGIT; i++)
		std::cout << numbers[i] << ' ';
	std::cout << std::endl;
}

int Guess::At(int index)
{
	if (index < 0 || index >= DIGIT)
		return -1;

	return numbers[index];
}