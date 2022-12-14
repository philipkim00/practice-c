#include <stdio.h>

int main_h(void)
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

	if ()
	{
		;
	}
	else if ()
	{

	}

	else
	{

	}


	// switch case






	// 삼항 연산자
	// :?



	return 0;
}


/*
## 비교 연산자
양쪽 피연산자가 같은지 다른지 비교해줌.
== (같다), != (다르다), <(오른쪽이크니), >(왼쪽이 더크니), <= (오른쪽보다 크거나 같니), >= (왼쪽보다 크거나 같니)
참, 거짓 반환됨.

## if / else / else if
if ()
{

}
만약에 가정하는것.
괄호 안에는 참 거짓이 들어감.
대괄호안에 있는것은 괄호 안이 사실(참)이면 실행됨.

data = 0;
if (0 && 200)
{
	data = 100;
}

if (data == 100)
{

}
이코드에서 처음에 0을 넣었고 처음 if 는 거짓이 뜨고 100인 안들어가서 아래에 if는 거짓이 나온다.
이코드의 의문점 ?
아래까지 데이터의 값이 모두 파악이된다.비교에 쓰인 숫자도 내가 넣어줬기 때문에 저 비교구문은 안바뀐다.
수행 여부가 이미 결정이 나버림.
그래서 컴파일러는 최적화 옵션을 키면
if (data == 100)
{

}
이 구문을 지워버리고 생각함.(최적화)
디버그에서는 수행될수 있는 이유는
디버그(debug) 모두라 최적화 옵션이 안켜져 있어서 수행될수 있다.이런것들을 하나씩 수행시키지만
릴리스(release)모두에서는 이 코드는 존재하지않는다고 생각하고 컴파일함.

if를 사용하는이유는
가변성 때문에 될수도있고 안될수도 있다.입력->반응형으로 바꾸면 될수도있고 안될수도 있기 때문에.

지금은 문법이라 고정된 값을 이용하지만 실제 게임에서는 사용자 입력값을 받을것이다.

if (data == 100)
{
	// 실행도 안댐.
}
else
{

}
else 는 if가 거짓이 뜨면 실행하는것.

else if ()
{

}
else if
조건중에 하나만 걸려라.
else if 다 안걸리면 else적혀 있다면 else 실행됨.
*/