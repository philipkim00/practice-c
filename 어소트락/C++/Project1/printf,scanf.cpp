#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

// �Լ�
int main()
{
	int a = 100;
	int iData = Add(100, 200);

	// �ݺ��� 
	//for (/*�ݺ��� �ʱ�ȭ*/;/*�ݺ��� ���� üũ*/;/*�ݺ��� ����*/)
	//{

	//} 

	// 0, 1, 2, 3
	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("output Test\n");
	}

	/*int i = 0;
	while (i < 4)
	{
		printf("Output Test\n");

		++i;

		continue;

		break;
	} */

	int i = 0;
	int i2 = 1;

	// ����Ű
	// ������ ���� �ּ�       : Ctrl + k, c
	// ������ ���� �ּ� ����  : Ctrl + k, u
	// Alt Drag

	// �����
	// ���� ����                     : F5
	// ���� �ߴ������� �ڵ� ����

	// �ߴ��� ���� �� ����             : F9
	// ����� ��, ���� ����            : F10
	// ����� ��, ���� ����(�Լ� ����) : f11
	// ����� ��, ����� �����ϱ� : Shift + F5


	// �ܼ�
	// printf
	printf("abcdef %d \n", 10);
	printf("abcdef %f \n", 3.14f);

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}

	// scanf
	int iInput = 0;
	scanf_s("%d", &iInput);

	return 0;
}

/*
### #include <�������>
��ó�����߿� �ϳ���.
���� ���ϴ� �ٸ������ ��������� ���Խ��Ѽ� ���ڴٶ�� �˸��°�.(��ó����)

f5������ ���α׷� �����ϸ� �ߴ�â->�ܼ�â.(��� ������ƴ)
### printf
#### �ܼ�â�� ���ڿ��� ����ϴ� �Լ�.

#### ����.
printf("abcdef %d \n", 10);
�ֵ���ǥ�ȿ� ����� �����ϰ�% d(������) �ְ�
10�� % d�� ��.
abcdef 10���� ��µ�.

% d(������)
$f(�Ǽ���)

### scanf
#### �ܼ�â���� �Է¹޴� �Լ�.
scanf_s();
_s���� �̶�� ��ߵ�.

scanf_s("%d", &iInput);
��Ģ �ֵ���ǥ���̿�% d �Է¹��� Ÿ�� ���ϰ�
, & iInput�� ���߿� ����.
scnaf_s�� �Է¹ޱ� ������ ������ ����.
*/
