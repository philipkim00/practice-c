//#include <stdio.h>

/*int main_a(void)
{
	int *x; // x라는 정수형 포인터 변수를 생성
	int *y; // y라는 정수형 포인터 변수를 생성

	x = malloc(sizeof(int)); // x에는 malloc 함수를 이용해서 int 자료형 크기에 해당하는 메모리를 할당합니다.

	*x = 42; // x에 저장된 주소로 가서 42를 저장한다.
	*y = 13; // y에 저장된 주소로 가서 13을 저장한다.
}*/

/*
위코드는 버그가 있다.

정수형의 크기를 잊었어도 sizeof 연산자를 사용하면 크기를 알수있다.

x라는 코도에는 메모리를 할당했는데.
y에는 메모리를 할당하지않음.

*/

int main_b(void)
{
	int* x;
	int* y;

	x = malloc(sizeof(int));

	*x = 42;

	y = x;
	*y = 13;
}

/*
y = x; 
x안에 있는 주소를 y에도 저장하면

 y = x; 라는 코드를 더해주면,  y는 x가 가리키는 곳과 동일한 곳을 가리키게 됩니다.

따라서 *y = 13; 으로 저장하면  x가 가리키는 곳에도 동일하게 13으로 저장될 것입니다.



*/