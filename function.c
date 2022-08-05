//함수는 x(입력)- 수식?(알고리즘)- 결과값 입력값을 받아서 동작을 처리하고 어떤값 출력하는것.

#include<stdio.h>
#include<time.h>

// 선언
void p(int num); // 메인 함수 위쪽에서 선언 나 p라는 함수를 쓸거야

void function_without_return(); //위에서 선언
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); //전체 total 개에서 ate 개를 먹고 남은 수를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void)
{
	//function
	//게산기
	
	/*int num = 2;
	//printf("num 은 %d 입니다\n", num);
	p(num); // p라는 함수를 호출하고 그떄 num변수의 값을 던지겠다.

	// 2 +3은 ?
	num = num + 3; // num += 3
	//printf("num 은 %d 입니다\n", num); //5
	p(num);

	// 5 -1
	num -= 1; //num = num-1
	//printf("num 은 %d 입니다\n", num); //4    여기서 공통되는 부분을 함수화해서 공통되는 부분을 간략하게 할수있음.
	p(num);

	// 4 x 3 은?
	num *= 3; //num= num*3
	//printf("num 은 %d 입니다\n", num); //12
	p(num);

	// 12/6 은?
	num /= 6; //num = num/6
	//printf("num 은 %d 입니다\n", num); // 2
	p(num); */

	//함수 종류
	// 반환값이 없는 함수
	// function_without_return(); 이거는 반환값이없어서 동작을 할필요없슴 

	// 반환값이 있는 함수
	/*int ret = function_with_return(); //이거는 반환값이 있기때문에 정수형 리턴 ==int ret(리턴)
	p(ret); */

	// 파라미터(전달값)가 업는 함수
	//function_without_params();


	//파라미터(전달값)가 있는 함수
	//function_with_params(35, 20, 25);

	// 파라미터(전달값)도 받고, 반환값이 있는 함수
	//int ret = apple(5, 2); // 5개의 사과 중에서 2개를 먹었어요
	//printf("사과 5개 중에 2개를 먹으면? %d 개가 남아요", ret);
	//printf("사과 %d개 중에 %d 개를 먹으면? %d 개가 남아요", 10, 4, apple(10, 4));



	//계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	return 0;
} 

//정의
void p(int num) //똑같은 선언문을 주고 중괄호 내용채우기.
{
	printf("num 은 %d 입니다\n", num);
}
// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?

/*반환형 함수이름(전달값) //반환이란 함수에서 동작을 수행하고나서 반환해주는 값.
{

} */

//int/*void*/ 함수이름(int num, int num2, char c, float f) //반환형은 우리가 전달해주는 것에 맞게 쓴다 정수니까 여기는 int void는 반환하지않겠다. 전달값도 우리가 정할수있다. 이름다르게해서 여러개할수있다.
//{                                                        // 아래에 선언문은 메인 함수 위쪽에 완전히 동일해야함.
//	return num + 4; 
//} 

void function_without_return()
{
	printf("반환값이 없는 함수입니다\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수있니다\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다\n",
		num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 변환값이 있는 함수입니다\n");
	return total - ate;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2) 
{
	return num1 / num2;
}

// 함수는 프로그램할때 무조건 사용 개념 잘 익히기
// 중요한거는 메인함수 위에서 함수 선언하고, 아래에서 정의
// 함수 순서는 x 