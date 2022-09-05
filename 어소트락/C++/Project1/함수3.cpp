#include <stdio.h>

// 함수
// Factorial
// 8!
int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{

		iValue *= (j + 2);
	}

	return iValue;
}


int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);

	return 0;
}

/*
팩토리얼
각자리 숫자들의 곱.
8!= 1x2x3x4x5x6x7x8

함수를 쓰는 이유.
모듈화해서 재활용(재사용)할려고.

int main()
{
	int i = 10;
	int iValue = 1;

	for (int j = 0; j < i - 1; ++j)
	{

		iValue *= (j + 2);
	}
	iValue;

	return 0;
}
이코드를 함수화

int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{

		iValue *= (j + 2);
	}

	return iValue
}

int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);

	return 0;
}

기능을 다 함수로 만들어 놓으면 나중에 큰 기능 만들떄 편하다.
모듈화를 잘하자.!!!!!
*/