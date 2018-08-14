#include "NumberContainer.h"
#include "main.h"

// template method
void NumberContainer::Print()
{
	const char* prefix = GetPrefix();

	std::cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		std::cout << numbers[i] << ' ';
	std::cout << std::endl;
}


int NumberContainer::At(int index)
{
	if (index < 0 || index >= DIGIT)
		return -1;

	return numbers[index];
}