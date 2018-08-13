#pragma once

// public : 제약 없음
// protected : 자신과 자신의 자손클래스에서만 접근 가능
// private : 클래스 내에서만 접근 가능

class Answer
{
//private:
//	int age;
//public:
//	int GetAge() // gettter
//	{
//		return age;
//	}
//	void SetAge(int a) // setter
//	{
//		if (a > 0)
//			age = a;
//	}

private:
	int numbers[3];

	void Print();

public:
	void Generate();

	int At(int index);
};