#include "main.h"
using namespace std;

void PrintNumbers(const char* prefix, int* numbers)
{
	cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		cout << numbers[i] << ' ';
	cout << endl;
}