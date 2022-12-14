#include <stdio.h>

int main_f(void)
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




	return 0;
}

/*
++, --(증감 연산자)
사실 이런 증감 연산자 산술연산자 이런거 사실 필요없음 사람이 그냥 정리할려고 이름 붙인거.

정수자료형에서나 실수 자료형에서는 증감 연산자를 쓸떄 1이 증가나하거 1이 감소하는게 맞는데
아닌 경우가 존재 포인터를배우면++, --가 1증가 1감소가 아님.

다음 단계로 증가한다.(로 생각)
한단계 증가한다.
한단계 감소한다.

한단계 증감하는게 1만 증감 시키는게 아니라 케이스에 따라 다를수있다(10일수도있고 모른다.)

증감 연산자 수행되는 위치에 따라 다르다.
++data;  전위(전치) 가장 먼저 수행됨.
data++;  후위(후치) 가장 나중에 수행됨.
다른점.
연산자 우선순위가 바뀐다.
증감하는것은 똑같음.
data = 0;

a = 10;
data = a++;
data에 a넣고 증가.그래서 data안에 수는 10,

data = ++a;
a에 1더하고 data에 넣어서 data 수는  11,

++은 전위건 후위건 이공간에 변수가 바뀜.cpu가 중간 값을 바꾸는게 아니라 a라는 값을 바꾼다.그래서 대입을 받을 필요없음.

data = 0;

data--;
data--;
이런상황에서는 전위냐 후위냐 따질 필요없음.
data안에 값이 감소할뿐이기떄문에.
### 이런경우 습관적으로 연산자를 전위로 쓰는걸 추천함.(딱히 특별한 사유가없으면)
왜 ? 후위연산자를 쓰게되면 클래스나 구조체에 오퍼레이터 ? 를 효율이 안좋은 문제가 발생할수 있음.
연산자 오버로딩을 할떄 알수있음.

*/