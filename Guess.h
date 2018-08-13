#pragma once

class Guess
{
private:
	int numbers[DIGIT];

	void Print();

public:
	void Input();

	int At(int index);
};