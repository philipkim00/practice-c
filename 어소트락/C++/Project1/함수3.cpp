#include <stdio.h>

// �Լ�
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
���丮��
���ڸ� ���ڵ��� ��.
8!= 1x2x3x4x5x6x7x8

�Լ��� ���� ����.
���ȭ�ؼ� ��Ȱ��(����)�ҷ���.

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
���ڵ带 �Լ�ȭ

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

����� �� �Լ��� ����� ������ ���߿� ū ��� ���鋚 ���ϴ�.
���ȭ�� ������.!!!!!
*/