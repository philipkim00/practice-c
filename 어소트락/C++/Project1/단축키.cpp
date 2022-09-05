#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

// 함수
int main()
{
	int a = 100;

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

	float i = 0;
	float i2 = 1;

	return 0;
}

// 단축키
// 지정한 구문 주석       : Ctrl + k, c
// 지정한 구문 주석 해제  : Ctrl + k, u
// Alt Drag            : (지정한 부분만 지정)

// 디버깅
// 디비겅 시작                     : F5
// 다음 중단점까지 코드 실행

// 중단점 생성 및 해제             : F9
// 디버깅 중, 구문 수행            : F10
// 마우스 커서 있는데부터 디버깅     : Ctrl + F10
// 디버깅 중, 구문 수행(함수 진입) : f11
// 디버깅 중, 디버깅 종료하기 : shift + F5

/*
컨트롤 + c, 컨트롤 + v
복사, 붙혀넣기

컨트롤 z
되돌리기.

컨트롤 x
잘라내기.

#### 중단점 걸고 디버깅 하면 그 중단점 줄이 수행된게 아닌 거기서 멈춘것,


int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int iData = Add(100, 200);
	return 0;
}

f10은 한 기능을 한번에 수행하는거고.(add함수까지 한번에 기능으로 묶어서 실행하고)
f11은 그 한 기능을 쪼개서 수행하는것.(add함수까지 가는것도 일일이 단계별로 진행.)

뭐가 안될떄 중단점을 사용해서 디버깅하면서 변수값을 확인할수있어서 실력 빨리늘어난다.
*/