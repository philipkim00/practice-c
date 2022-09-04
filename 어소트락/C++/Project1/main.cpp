#define HUNGRY  0x001
#define THIRSTY 0x002
#define TIRED   0x004 // 비트상 세번쨰 칸이면 3이 아닌 세번쨰 비트의 1의 값인 4여야한다.
#define FIRE    0x008

#define COLD    0x010 
#define POISON  0x020
#define COLD    0x040
#define COLD    0x080

#define COLD    0x100
#define COLD    0x200
#define COLD    0x300
#define COLD    0x400

// 1. 가독성
// 2. 유지보수


// 주석
// 설명 역할, 코드로 인식되지 않는다.

// 전역변수
int global = 0;


int Add(int left, int right)
{
	return left + right;
}

// 함수 
int main_aa()
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
		// if 가 참인 경우 수행
	}
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

	
	// 비트 연산자
	// 쉬프트 <<. >>
	unsigned char byte = 13;

	byte <<= 3; // 2^n 배수

	byte <<= 1; 
	//같은 의미.
	byte = byte << 1;

	byte >>= 1; // 2^n 나눈 몫

	//비트 곱(&), 합(|), xor(^), 반전(~)
	// 비트단위로 연산을 진행,
	// & 둘다 1인 경우 1
	// | 둘중 하나라도 1이면 1
	// ^같으면 0, 다르면 1
	// ~ 1은 으로, 0은 1로

	// int iStatus = HUNGRY;  // istatus에 1을 넣겠다. 앞에 전처리해서.
	unsigned int iStatus = 0;


	// 상태 추가
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;
	
	// 상태 확인
	if(iStatus & THIRSTY)
	{

	}
	
	//특정 자리 비트 제거
	iStatus &= ~THIRSTY;


	// 변수
	// 1. 지역변수
	// 2. 전역변수
	// 3. 정적변수
	// 4. 외부변수



	// 지역변수
	int iName = 0;

	// 괄호 안에 선언된 변수(함수, 지역)
	{
		// 변수명 규칙
		int iName = 100;
		iName;
		{
			{

			}
		}
	}


	iName = 100;

	// 함수
	// data = 10 + 20;
	data = Add(10, 20);


	int iName = 100;

	return 0;
}
