#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

/*
메모리 교환, 스택, 힙

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
1.임시 공간으로 쓸 변수 tmp a를 저장. 
2.a를 b의 값으로 바꾸고.
3.이미 a를 tmp에 복사해두어서 괜찮다.
4.b에다가 tmp에 있는 값을 복사한다.
이렇게 하고싶지만 이렇게 쉽게 동작하지않는다.
그래서 저 코드는 교환이 안일어남.

교환 안된 이유: 
함수에 인자를 전달할 떄 그 값을 복사해서 전달함.
따라서 x와 y가 1과 2로 초기화 되어있고 함수에 인자로 전달하지만
함수는 x과 y 자체가 아니라 x와 y의 복사본을 전달받음.
함수의 프로토타입에서 이 두값을 a와 b라 부른다. 
여기서 사실 swap 함수는 제대로 동작함. 
a와 b는 교환 하지만 x와 y를 바꾸진 못한다. 복사본을 바꾸니까용.!


컴퓨터 메모리는 막 저장되는게 아니라 아주 조직적인 방법으로 사용됨.
젤 위(머신코드==clang이 컴파일한0과 1의 값)
그아래(globals전역변수 == 전역 변수나 정보)
그아래(heap == 우리가 메모리를 할당 받을 수 있는 커더란 영역)
malloc를 호출하면 heap쪽에서 메모리를 가져옴
malloc이 메모리를 할당하는 곳.

맨아래(stack == 함수의 지역 변수)
스택이라는 메모리 제일  아래 영역에 놓임.
기본 함수 main에서 한개 이상의 인자와 지역 변수가 있다면 이위치에 놓임.
스택은 함수가 호출될 떄 지역 변수가 쌓이는 공간.

이 코드의 근본적 해결책.
참조로 전달(포인터와 동일한 의미)
우편함의 주소로 찾아가 값을 살펴보듯 main에서 x와 y의 값을
swap에게 전달하지 않고 x와 y의 주소를 알려줘서 
swap 함수가 그 주소로 가서 값을 바꾸게 하는것.
*/

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); //x와 y를 전달하지 않고 x와 y의 주소를 전달함.
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b) //포인터 넣어서 주소를 표시.
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
void swap(int *a, int *b) 
함수 이름 있고 포인터 형 포인터형임.
int *a는 정수의 주소를 받아 a라 부른다는 의미.
또다른 정수를 받아 b라고 부름.
{
    int tmp = *a;
    *a는 a가 가리키는 곳으로 따라가라는 것. x를 가리킴 x가 있고 1이라는 값. 그 값을 tmp에 저장.
    *a = *b;
    그다음 b로 가라함. b의 주소를 따라가면 y에 도착하고 y는 2 *a의 의미는 a가 가리키는 주소로 가서 b가 가리키는 값을 저장하라는 것.
    *b = tmp;
    마지막으로 tmp값인 1을 b가 가리키는 주소에 저장함.
}
*/