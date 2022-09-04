#include <stdio.h>

int main_i(void)
{
	// 자료형 : 변수가 어떠한 형태를 나타내는지를 설명해주는 역할이 자료형에 역할.
	// : (크기단위, byte) Date Type
	// 정수형 : char(1) , short(2), int(4) , long(4) , long long(8) ,더있슴
	// 실수형 : float(4), double(8)

	int i = 0;
	// 1.i안에 들어가는 데이터는 정수 표현방식을 따른다. 
	// 2. i라는 변수의 크기는 4바이트이다.

	// 1 바이트로 양수만 표현
	// 256가지 -> 0~255
	unsigned char c = 0; // 1바이트 양의 정수만 내포하는 자료형.
	c = 0;
	c = 255;
	c = 256; //짤려서 못들어옴. 


	//바이트 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127 
	/*signed*/ char c1 = 0;
	//signed 키워드가 기본적으로 생략되있고 음수 양수 둘다표현하지만 기본적인 전제라 적지는않음.
	c = 255;
	c = -1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + (int)4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다.

	// 정수는 정수끼리, 실수는 실수 끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자.

	float f = 10.2415f + (float)20;

	// 실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로, f 를 붙이지 않으면 double 자료형으로 간주한다.
	// 0.1f; 0.1;




	// 연산자
	// 대입 연산자, =(오른쪽에 값을 왼쪽에 넣어라)


	// 산술 연산자
	// + , -, *(곱하기), /(나누기), %(모듈러스, 나머지연산자, 피연산자가 모두 정수)
	// ++, -- (증감 연산자)
	// 한 단계 증가 또는 감소.
	int data = 10 + 10; // 20
	//data = data + 20;
	data += 20;

	//data = 10 % 3; //이렇게 하면 나머지 1
	data = (int)(10.f / 3.f); //3.33333333 나와야 하지만 앞에 int를 썻으므로 정수변환 3으로 변환됨. 명시적으로 표현함.!


	data = 0;
	++data; // 전위(전치)
	data++; // 후위(후치)
	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	data = 0;

	a = 10;
	data = a++;  //data에 a넣고 증가. 그래서 data안에 수는 10
	data = ++a;  // a에 1더하고 data에 넣어서 data 수는  11

	data = 0;
	data--;
	data--;


	//data++; 1
	//data++; 2
	data--; // -1 
	data--; // -2


	// 논리 연산자
	// !(역), &&(곱,And), ||(합,Or)
	// 참(true), 거짓(false)
	// 참   : 0 이 아닌 값, 주로1
	//거짓  : 0
	bool trueflase = true;
	bool IsTrue = 100;  // true 1로 받아드림 100을 저장하는것이 아님. , 
	// 100을 넣어도 참이라고 생각하겠네? 아니다. 1, 또는 0으로 판단하기떄문에 1또는 0으로 변환되서 들어간다.


	IsTrue = true;
	IsTrue = !IsTrue; // false

	// 일반 정수형 자료형에도 역은 먹힌다.
	int iTrue = 0;
	iTrue = !iTrue;

	//iTrue = 100 && 200; // 1(참)
	iTrue = 0 && 200; // 0(거짓)
	//iTrue = 0 || 300; // 1(참)
	iTrue = 0 || 0; // 0(거짓)

	// 비교 연산자
	// ==, !=, <, <=, >, >=
	// 참, 거짓 

	// 구문 
	// if, else
	data = 0;
	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// 실행도 안댐.
	}
	// if 가 참인 경우 수행
	else
	{
		// if 가 거짓인 경우 수행
	}



	// switch case
	int iTest = 20;
	switch (iTest)
	{
	case 10:
	case 20:
	case 30:



		break;
	default:

		break;
	}

	//위의 switc case구문을 if 구문으로 바꾼것.
	if (iTest == 10 || iTest == 20 || iTest == 30)
	{

	}
	else
	{

	}


	// 삼항 연산자
	// :?

	iTest == 20 ? iTest = 100 : iTest = 200;

	// 위의 코드랑 같은 의미.
	if (iTest == 20)
	{
		iTest == 100;
	}
	else
	{
		iTest = 200;
	}

	return 0;
}

/*
 모든 조건이 실패했는데 else 없으면 아무것도 출력안함.

 switch case

switch (10)
{
case 10:
	break;
case 20:
	break;
default:
	break;
}

switch 해놓고 괄호안에 원하는 상수값, 변수값이 넣은 값과
case 안쪽에 있는 데이터와 일치를 하면 구문을 실행.
그리고 case 안쪽에 일치하는 데이터가 없으면
default로 와서 실행됨.

위의 switch 코드는 이 if 구문과 하는 역할이 똑같음.

int iTest = 10;
if (iTest == 10)
{

}
else if (iTest == 20)
{

}
else
{

}

그럼 switch case 하고 if 구문의 차이점 ?
문법적으로는 크게 차이x

if else 되는 경우가 있다.
1.변수나 특정 값을 넣어야 되는경우
2.조건이 복잡한 경우

switch case는 동일한 케이스만 걸리는데 이걸로만 표현하기 빡센게 있음.

그리고 if / else 구문은
조건이 너무 길어지면
코드 가독성이 switch case보다 떨어질수 있다.

상황에 맞춰서 쓰면 된다.

int iTest = 20;
switch (iTest)
{
case 10:
	break;

case 20:


default:

	break;
}

 스위치 케이스 주의 상황
스위치 케이스 쓸떄 각 case마다 break 안넣으면 코드는 아래쪽
default쪽으로 내려가서 break만나기 때문에 문법오류는 아니지만 이상한게 작동해서 왜 틀린지 찾기 어려울수도 있다.

case break가 c++에서 문법적으로 같이 안묶이는 이유

int iTest = 10;
switch (iTest)
{
case 10:
case 20:
case 30:



	break;

default:

	break;
}

이렇게 case를 여러번 쓸수도 있어성


int iTest = 10;
if (iTest == 10 || iTest == 20 || iTest == 30)
{

}
else
{

}

위의 if 구문 연산 순서.
연산순서 iTest 10인경우
1. 첫번쨰 iTest가 참이기때문에 1로 출력됨.
if (1 || iTest == 20 || iTest == 30)
2. || 하나만 맞으면 되니까
if (1) 됨.

연산순서 iTest 20인경우
1. 첫번쨰 iTest가 거짓이기때문에 0로 출력됨.
if (0 || iTest == 20 || iTest == 30)
2. 두번쨰 iTest가 참이기 때문에 1로 출력됨.
3. || 하나만 맞으면 되니까
if (1) 됨.

연산순서 iTest 30인경우
1. 첫번쨰 iTest가 거짓이기때문에 0로 출력됨.
if (0 || iTest == 20 || iTest == 30)
2. 두번쨰 iTest가 거짓이기 때문에 0로 출력됨.
if (0 || 0 || iTest == 30)
3. || 사이에 둘다 거짓이니까 거짓인 0출력
if (0 || iTest == 30)
4. 세번쨰 iTest가 참이기때문에 1로 출력됨.
if (0 || 1)
3. || 하나만 맞으면 되니까
if (1) 됨.


삼항 연산자
	: ?
	iTest == 20 ? iTest = 100 : iTest = 200;


iTest가 20이
맞으면 iTest 100실행
틀리면 iTest 200실행.

삼항 연산자는 활용하면
간략해보일수는 있어도 가독성이 떨어질수있다.
특별히 코드를 줄여서 이쁘게 쓸려는것이 아니면 굳이 쓸필요없다.

*/