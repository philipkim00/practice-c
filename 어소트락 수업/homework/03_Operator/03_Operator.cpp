﻿#include <iostream>

int main()
{
	//연산자

	// + - / %

	int num = 0;
	int result = 0;
	num = 4 + (5 * 2);// 연산 기호를 외울필요없이 그냥 두가지 이상 연산하면 괄호 써주기.
	num = num + 3;
	num += 3;
	//변수안에 3을 더한 다음에 대입해주겠다.
	num -= 5;

	// 증감연산자
	++num;
	--num;
	
	num++;
	num--;

	// 전위 연산자
	//num--;
	//result = num;
	result = --num;
	--num;

	// 후위 연산자
	num++;
	num--;

	// 주석 ctrl +k +c
	// 주석해제 ctrl +k +u

	//int num = 0;
	//num = 4 - 5;
	////num = num - 3;
	//num -= 3;

	//int num = 0;
	//num = 4 * 5;
	////num = num * 3;
	//num *= 3;
	//
	//int num = 0;
	//num = 4 / 5;
	////num = num / 3;
	//num /= 3;

	// num == 12
	int mod = 0;
	mod = num % 5;


	// 삼항 연산자
	int ret = (mod > 0 ? 1 : -1);
	// 자료형 변수 = (조건 ? 참이면나오는 출력 : 거짓이면 나오는 출력);
	//맞으면 1이 ret에 대입
	//틀리면 -1이 ret에 대입.

	//비트 연산자 

	// & and(
	// 비교하는 비트가 둘다 1이면 1나옴
	
	// | or
	
	// 비교하는 비트가 둘중에 하나라도 1이면 1
	
	// ^ xor
	// 둘의 비트가 같으면 0 ,다르면 1
	
	// ~ not
	// 반전시킴.
	
	// >> << 시프트
	// 비트를 왼쪽 오른쪽으로 밀음.

	return 0;
}

//가챠는 1%면 100번중에 1번 나오는게 아니다(독립시행)
//왜냐하면 운이 좋으면 다나올수있기떄문에 한명의 유저로 계산하는게
//아니라 서버로 계산한다. 서버 갯수 제한 이런식.