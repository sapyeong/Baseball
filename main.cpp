#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	// 1. 0~9 ������ �ߺ����� �ʴ� �� ���� ������ �����Ѵ�. (����)
	int answer0;
	int answer1;
	int answer2;

	while (1)
	{
		answer0 = rand() % 10;
		answer1 = rand() % 10;
		answer2 = rand() % 10;

		if (answer0 != answer1 && answer1 != answer2 && answer2 != answer0)
			break;
	}

	cout << "[����] ";
	cout << answer0 << ' ';
	cout << answer1 << ' ';
	cout << answer2 << ' ';
	cout << endl;


	while (1)
	{
		// 2. ����ڰ� �� ���� ���ڸ� �Է��Ѵ�. (����)
		int guess0;
		int guess1;
		int guess2;

		cin >> guess0;
		getwchar(); // ���͸� ����
		cin >> guess1;
		getwchar(); // ���͸� ����
		cin >> guess2;
		getwchar(); // ���͸� ����

		cout << "[����] ";
		cout << guess0 << ' ';
		cout << guess1 << ' ';
		cout << guess2 << ' ';
		cout << endl;



		// 3. ����� ����Ѵ�.
		int strike = 0;
		int ball = 0;
		int out = 0;

		if (answer0 == guess0)
			strike++;
		else if (answer0 == guess1 || answer0 == guess2)
			ball++;
		else
			out++;

		if (answer1 == guess1)
			strike++;
		else if (answer1 == guess2 || answer1 == guess0)
			ball++;
		else
			out++;

		if (answer2 == guess2)
			strike++;
		else if (answer2 == guess0 || answer2 == guess1)
			ball++;
		else
			out++;


		// 4. ����� ����Ѵ�.
		cout << "[S]" << strike << " [B]" << ball << " [O]" << out << endl;


		// 5. 3��Ʈ����Ŀ�� �ƴϸ� 2������ ���ư���.
		if (strike == 3)
			break;
	}
	
	return 0;
}