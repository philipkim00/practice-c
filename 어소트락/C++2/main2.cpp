#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

// 함수
int main()
{

	int iData = Add(100, 200);

	// 반복문 
	//for (/*반복자 초기화*/;/*반복자 조건 체크*/;/*반복자 변경*/)
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

	return 0;
}