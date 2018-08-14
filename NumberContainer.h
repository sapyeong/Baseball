#pragma once
class NumberContainer
{
protected:
	int numbers[3];

	void Print();

	virtual const char* GetPrefix();

public:
	int At(int index);
};

