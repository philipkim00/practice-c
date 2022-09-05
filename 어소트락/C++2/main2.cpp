#include <stdio.h>

// 함수
// Factorial
int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{

		iValue *= (j + 2);
	}

	Factorial(10);

	return iValue;
}

// 재귀함수
// 가독성, 구현의 용이.

int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);

	return 0;
}