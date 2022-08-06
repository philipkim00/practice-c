#include <stdio.h>

int main(void)
{
	// 배열
	//ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ 배열은 지하철 한칸이 int 정수형 변수 연속된 공간에 여러개 연속해서 만드는것.

	/*int subway_1 = 30; // 지하철 1호차에는 30명이 타고 있다.
	int subway_2 = 40;
	int subway_3 = 50;
	
	printf("지하철 1호차에 %d 명이 타고 있습니다\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다\n", subway_3);*/
	
	// 여러 개의 변수를 함께, 동시에 생성
	/*int subway_array[3];  //[0][1][2] 0부터시작.                            //[3] 대괄호안에 숫자 의미 몇개의 칸을 가질것이냐 int형정수 가질것이냐. 
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);
	}*/

	//  값 설정 방법
	/*int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 값은 항상 초기화를 반드시 해야함. 왜? 이렇게 하면 스레기 값으로 나옴.
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 배열 크기는 항상 상수로 선언
	/*int size = 10; 
	int arr[size가 아닌 10];*/

	/*int arr[10] = { 1, 2 }; // 3번쨰 값부터는 자동으로 '0'으로 초기화 됨
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1, 2 }; // arr[2]랑 동일

	/*float arr_f[5] = {1.0f,2.0f, 3.0f};
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	// 문자(한글자) vs 문자열(한글자 이상의 여러글자)
	/*char c = 'A';
	printf(" %c\n", c);*/

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함 안되면 이상한 문자뜸(오류)
	//char str[6] = "coding"; //[c] [o] [d] [i] [n] [g] 
	/*char str[7] = "coding"; //[c] [o] [d] [i] [n] [g] [\0]
	printf("%s\n", str);*/

	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/ //sizeof(str) 배열형 변수가 가지는 크기를 나타내는것. 

	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]); //이렇게하면 coding 을 한글자씩 뽑음
	} */

	/*char kor[] = "나도코딩"; // 2바이트*4 +공백 나타는거 1바이트 그래서 9바이트
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// 영어 한글자 : 1 byte(메모리공간)
	// 한글 한글자 : 2 byte
	// 한 글
	// En gl ish
	// char 크기 : 1byte */

	//char c_array[7] = {'c','o','d','i','n','g','\0'};
	/*char c_array[6] = {'c','o','d','i','n','g'}; //이상한 문자뜸
	printf("%s\n", c_array); */

	//char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);   //빈칸으로 값이 들어간다.. 코딩이라는 건 출력이되고 \0 에 남는공간이 문제에 끝에 자동으로들어감??
	}*/
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%d\n", c_array[i]);  //ASCll 코드 값 출력(null 문자 0으로 입력됨)
	}*/

	// 문자열 입력받기 : 경찰서 조서 쓰기 예제
	/*char name[256]; //256개의 크기의 해당하는 배열받들고 %s 입력받아서 name이라는이 배열에 값을 입력받음
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	//참고 : ASCII 코드? ANSI (미국표준협회)에서 제시한 표준 체계
	// 7bit. 총 128개 코드(0~127)
	// a : 97 (문자 a의 아스키코드 정수값)
	// A : 65
	// 0 : 48

	/*printf("%c\n", 'a'); //a
	printf("%d\n", 'a'); //97

	printf("%c\n", 'b'); //b
	printf("%d\n", 'b'); //98

	printf("%c\n", 'A'); //A
	printf("%d\n", 'A'); //65

	printf("%c\n", '\0'); //공백
	printf("%d\n", '\0');*/ //0

	printf("%c\n", '0'); //0
	printf("%d\n", '0'); //48

	printf("%c\n", '1'); //1
	printf("%d\n", '1'); //49

	// 참고2 : 0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
	/*for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 %d : %c\n", i, i);
	}*/
	return 0;
}