/*c에서는 문자열과 정수 이외에도 다양한 종류의 데이터들이 있다.

bool
참 / 거짓의 값 == while (true) 같이 사용

char
딱 한개의 문자를 나타낸다.yes / no를 나타내는 y나 n이 그 예시

double
소수점 뒤에 더많은 숫자를 가질수 잇는 실수들 표현.

float
실수를 나타낸다.
소수점이 있는 수들 말한다.

int
정수를 나타내고.

long
int 와 조금 다른 long
int는 일반적으로 특정 크기를  가진다.(정해진 수만큼 샘 40억정도까지)
long이라는 데이터는 더 많은 비트를 사용하기 때문에.더높은 수까지 가능.

string
쌍따음표안에 들어간 한 개 이상의 문자들이있다.보통 char 하나하나보다 크다.

cs50 라이브버리가 제공하는 또다른기능
get_char

get_double

get_float

get_int

get_long

get_string

이 get_ ? ? 들은 모두 사용자에게 특정 값을 물어보고 그들이 입력한 값을 사용할 수 있도록 해준다.

형식 지정자
% c  char

% f  float, double

% i int

% li long

% s string */
//#include <stdio.h>

/*int main(void)
{
	int age = get_int("what' is your age\n");
	//int days = age * 365; // age에 365를 곱하고 오른쪽에서 왼쪽으로 복사하고 days라는 변수에 저장해라.// c에서는 사칙연산을 비롯한 나머지 연산까지 가능
	printf("You are at least %i day old.\n", /*days*///age * 365); //이렇게 해도무관.
	//return 0; 
//} 

/*int main(void)
{
	float price = get_float("what's the price\n");
	printf("Your total is %f.\n", price * 1.0625); //상황에 맞게 형식지정자를 잘사용해야됨 여기서는 가격은 소수점이 있을수있으므로(달러)
}    // %.2f 하면 소수점 2번쨰 까지만 보여줌 */
 
/*int main(void)
{
	int n = get_int("n: ");  //사용자에게 정수값을 입력받아 변수 n에 저장
 	if (n % 2 == 0) //짝수 나타내는 수식 
	{
		printf("even\n"); //짝수 
	}
	else //이렇게 하는게 더 최적화!
	{
		printf("odd\n");
	}*/
	/*else if (n % 2 == 1) // 홀수 나타내는 수식
		printf("odd\n"); */
//} 

//주석: 포스트잇 같은것 자신이나 자신의 친구에게 설명용/

//cd 의미 디렉토리를 변경한다 

/*+:  더하기
-: 빼기
* : 곱하기
/ : 나누기
% : 나머지
&& : 그리고
|| : 또는 */



	
