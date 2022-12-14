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

/*
### 재귀함수
함수안에서 자기 자신을 호출하는 함수.

#### 호출 스택은 정말 중요하다.
프로그램의 문제점을 추적할떄 좋다.
디버깅할떄 호출스택 잘보기.


메모리 영역은 스택 메모리영역 - 후입선출

메모리에서 위의 함수가 24를 메인함수에 전달하고 사라지는것이 아니고
cpu에 레지스터 메모리 영역에 값을 잠시 저장해두고 스택이 사라짐.

재귀함수 잘못쓰면 스택오버플로우(stack overflow) 걸릴수 있슴.

### 재귀함수
자기함수안에서 동일한 함수를 호출하는 재귀함수.
재귀함수는 반드시 탈출 조건이 있어야함.

### 재귀함수 단점
1. 스택오버플로우 걸릴수 있음(재귀함수를 이상하게쓰면)
2. 성능이 떨어진다.
호출비용과 해제비용 들어감.

코드해석.

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
자기함수에서 자기함수 호출하는것은
함수안에서 스택이 쌓여가는것이 아니라
함수가 호출되면 원래있던 함수에 호출된 함수가 쌓이는것임.
그러므로 팩토리얼 함수를 또 호출한거니까 점점 안으로쌓이는
것이 아니고 위로 새로운 함수를 쌓는것이다.

그렇지만 이코드의 문제점은 함수를 계속 무한반복해서 스택을 무한으로 쌓아서
메모리 부족 오류인 스택 오버 플로우가 생김.
*/