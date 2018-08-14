#pragma once
class NumberContainer // abstract
{
protected:
	int numbers[3];

	void Print();

	virtual const char* GetPrefix() = 0; // abstract

public:
	int At(int index);
};

