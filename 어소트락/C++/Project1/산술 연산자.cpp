#include <stdio.h>

int main_e(void)
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
	c = -1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + 4.0;

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
	// ++, -- 
	int data = 10 + 10; // 20
	//연산자 우선순위를 기본적으로 생각했다.
	//data = data + 20;
	data += 20;

	//data = 10 % 3; //이렇게 하면 나머지 1
	data = (int)(10. / 3.);
	//3.33333333 나와야 하지만 앞에 int를 썻으므로 정수변환 3으로 변환됨. 명시적으로 표현함.!

	return 0;
}


/*
### c++ 에서 문장을 마무리할때는 세미콜론을 사용한다.
#### 엔터를 안쳐도 코드에서는 이상없지만 가독성이 떨어진다.


## 연산자

### 1.대입 연산자
= (오른쪽에 값을 왼쪽에 넣어라)

## 2.산술 연산자 종류

###  + , -, * (곱하기), / (나누기), % (모듈러스, 나머지연산자)
### ++, --

int data = 10 + 10; // 20
####  저위의 것을 계산할떄 연산자 우선순위를 기본적으로 생각했다.
data = data + 20; // 40
cpu가 생각을 할떄 중간결과를 레지스터에 저장해둠.여기서는 40을 저장해둠.

모든 연산자들이 편하게 쓰기위해 이렇게 사용
#### data += 20
이건 data = data + 20; 이랑 똑같은 것.

피연산자(연산을 당하는입장)
나누기를 시도할떄 피연산자가 실수로 나누기를 계속하면 소수점으로 계속 떨어짐.
피연산자가 정수냐 실수냐에 따라 두가지 케이스
1.실수 10 / 3 = 3.333......

2.정수 10 / 3 = 몫 3 나머지 1

#### 실수끼리 나누셈할떄 % (모듈러스)나머지 연산이 가능할가 ?
안된다.
why ?
나머지 가 없어서.ㅋㅋ;
그래서 실수끼리 연산을 시도하면 컴파일 오류가 나서 실행도 안됨.
실수가 하나여도 말이 안됨.

####% 모듈러스 연산자는 피연산자가 모두 정수여야함.

실수에 나누기(/ )
data = 10. / 3.;
3.33333333 나와야 하지만 앞에 int를 썻으므로 정수 변환해서 소수점이 짤려서 정수인 3이 나옴.


float f = 10.2415f + (float)20;
data = (int)(10. / 3.);
실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로, f 를 붙이지 않으면 double 자료형으로 간주한다.
*/