#include <stdio.h>

int main_b(void) // 함수는 나중에 설명.
{
	// int : 자료형 (바뀔수 없다. int에 역할을 하는 것이 바뀔수없다.) 
	// i : 변수명(변수에 해당하는 부분은 이름을 준것이라 i라고만 고정이 아니고 마음대로 가능)

	// 자료형 : 변수가 어떠한 형태를 나타내는지를 설명해주는 역할이 자료형에 역할.
	//        : (크기단위, byte) Date Type
	// 정수형 : char(1) , short(2), int(4) , long(4) , long long(8) ,더있슴
	// 실수형 : float(4), double(8)


	int i = 0; // 1.i안에 들어가는 데이터는 정수 표현방식을 따른다. 2. i라는 변수의 크기는 4바이트이다.

	unsigned char c = 0; // 1바이트 양의 정수만 내포하는 자료형.
	c = 0;
	c = 256; //8비트로 표현이 불가능해서 0으로 표시됨.
	c = -1;




	return 0;
}

/*
정수 : 딱 떨어지는 수.
실수 : 소수점으로 계속 들어가는 수.

컴퓨터에서는 두가지를 표현하는 방식이 다름.
두가지를 분리함.

왜케 많냐 정수형은
사이즈의 차이
어떤 정수형을 선택했냐에 따라 우리가 지정한 변수의 크기가 달라짐.


1bit
메모리에서 더이상 쪼갤수없는 최소단위
한 비트당 0하고 1만 표현가능

byte
1byte == 8bit

2의 10승 = 1024 묶음
1024byte = 1kb(키로바이트)
1024kb = 1mb(메가바이트)
1024mb = 1gb(기가바이트)
1024gb = 1tb(테라바이트)

자료형 그자체로는 실체가 없다.
자료형은
선언할 메모리 공간에 이름을 부여하고(변수명) 그 공간이 어떤한 얼마에 크기가 되고 어떠한 형태의 데이터를 표현할것지 부연설명하는것.

경우의 수
1bit 경우의 수 == 2
2bit 경우의 수 == 4 == 2^2
3bit 경우의 수 == 8 == 2^3

규칙 하나 늘어날때마다 2배로 증가
그러므로 8비트는 2의8승 256가지를 표현가능.

0 0 0 0 0 0 0 0 = 정수 0
0 0 0 0 0 0 0 1 = 정수 1

1바이트
경우의 수는 256가지이고
수의 범위 0~255 까지 표현


unsigned를 붙혀야
양수형 변수만 취급할수 있다.(음수 x)

일단 변수의 선언이 위에 잇어야한다 컴퓨터언어도 언어이기때문에 말이 맞아야함.

c = 0; 에서 =는 대입연산자 c에다가 0을 넣을게용이라는의미.

일상 생황에서는 =는 같다는 의미이지만 컴퓨터언어에서는 대입이다

양쪽이 같다는 컴퓨터 언어는 ==(비교연산자)

1 1 1 1 1 1 1 1 -> 255
그러면 256은? 0으로 표현됨..
*/