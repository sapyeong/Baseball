#pragma once

// public : ���� ����
// protected : �ڽŰ� �ڽ��� �ڼ�Ŭ���������� ���� ����
// private : Ŭ���� �������� ���� ����

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