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

	int i = 0;
	int i2 = 1;

	// 단축키
	// 지정한 구문 주석       : Ctrl + k, c
	// 지정한 구문 주석 해제  : Ctrl + k, u
	// Alt Drag

	// 디버깅
	// 디비겅 시작                     : F5
	// 다음 중단점까지 코드 실행

	// 중단점 생성 및 해제             : F9
	// 디버깅 중, 구문 수행            : F10
	// 디버깅 중, 구문 수행(함수 진입) : f11
	// 디버깅 중, 디버깅 종료하기 : Shift + F5


	// 콘솔
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
### #include <헤더파일>
전처리기중에 하나다.
내가 원하는 다른기능을 헤더파일을 포함시켜서 쓰겠다라고 알리는것.(전처리기)

f5눌러서 프로그랭 실행하면 뜨는창->콘솔창.(명령 프로포틈)
### printf
#### 콘솔창에 문자열을 출력하는 함수.

#### 사용법.
printf("abcdef %d \n", 10);
쌍따음표안에 출력할 문자하고% d(정수형) 넣고
10이 % d로 들어감.
abcdef 10으로 출력됨.

% d(정수형)
$f(실수형)

### scanf
#### 콘솔창에서 입력받는 함수.
scanf_s();
_s버전 이라고 써야됨.

scanf_s("%d", &iInput);
규칙 쌍따음표사이에% d 입력받을 타입 정하고
, & iInput는 나중에 설명.
scnaf_s는 입력받기 전까지 무한히 돈다.
*/
