//#include <stdio.h>

/*void cough(void) //void 입력후 원하는 함수명 적어주고 괄호안에 void 입력
{ //이처럼 우리가 함수를 직접 만들수있음 이미 만들어진게아닌
	printf("cough\n");
}*/

//void cough(void); //선언 , void 의미 get_int나 get_strintg처럼 값을 반환하지 않는다는 뜻.
//void cough(int n);

//int get_positive_int(void);

//int main_사용자정의함수중첩루프5(void) 
//{
	//printf("cough\n");
	//printf("cough\n");
	//printf("cough\n");
	/*for (int i = 0; i < 3; i++) //일반적으로 프로그래머들은 0부터 세기 시작하는 습관 이게싫다면 int i =1; i<4 || i<=3 해도 상관없음. 
	{
		printf("cough\n");
	}*/
	
	/*cough();
	cough();
	cough();*/
	/*for (int i = 0; i < 3; i++)
	{
		cough();
	}*/
	/* {
		cough(3); //이것이 잘 디자인된 프로그램이다.
	} */
	//int i = get_positive_int();
	//printf("%i\n", i);
//}

/*void cough(void) // 적응
{ 
	printf("cough\n");
}*/

/*void cough(int n) // cough함수는 매게 변수화되어 n이라는 정수값을 받아 그 값만큼 동작을 반복하는 함수가됨.
{
	for (int i = 0; i < n; i++)
	{
		printf("cough\n");
	}
}*/

//int get_positive_int(void) //이함수에 입력을 받지 않습니다(void) 괄호 안에 아무것도 넣을 필요 x, 아무양의 정수나 받으면 되지만 이 함수가 뭔가를 반환하게 하고싶다.(int) 
// 함수왼쪽에 있는 단어는 출력의 종류를 의미
// 괄호 안의 이단어는 입력의 종류.
// 입출력이 없다면 void 작성하면됨.
/* 설명
int get_positive_int(void)를 보시면 우리가 처음 보는 기능이 있습니다.

이 부분의 논리를 차근차근 확인해 보겠습니다.

여기 get_postive_int라는 함수가 있는데 입력을 받지 않았습니다.

괄호 안에 아무것도 넣을 필요가 없습니다.아무 양의 정수나 받으면 됩니다.

하지만 이 전에 사용했던 get_int나 get_string 함수처럼 어떤 값을 받아와서 변수에 저장하는 것처럼 이 함수가 뭔가를 반환하게 하고 싶습니다.

그래서 int get_positive_int(void) 파란색 글씨는 void가 아니고 int가 됩니다.

함수 왼쪽에 있는 단어(파란색)는 출력의 종류를 의미 합니다.

int get_positive_int(void) 괄호 안의 빨간색 단어(void)는 입력의 종류를 뜻합니다.

만약 입출력이 없다면 void를 적어주시면 됩니다. */

/*
{
	int n; //n이라고하는 변수를 달라는 일조의 힌트 그 안에 어떤 값을 저장할지 아직 모르기 떄문에 그냥 int n;만 적음 아무것도 활당할 필요x
	do //do while 루프 이불리언 표현이 참일떄 다음을 수행하라는 뜻. 
	{
		n = get_int("Positive Integer: ");
	} while (n < 1); 
	return 0;
} 
*/    //do while 루프 좋은점 이 부분을 적어도 한 번 수행한 뒤 사용자의 협조 여부에 따라 다시할지 여부를 결정한다는것.
      // while 루프는 뒤에 나오는 불리언 표현이 참이면 다음을 수행했지만 do while은 무조건 먼저 한번은 먼저 수행.


/* 중첩루프
int main(void)
{
	int n;

	do
	{
		n = get_int("Size: ");
	} while (n < 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	} 
} */
/*먼저 int n; 으로 정수 값을 갖는 변수 n을 정의합니다.
그리고 do { … } while ()을 이용해서 while ()의 조건이 만족할때 까지 get_int 함수로 사용자가 입력값을 받아 n에 저장합니다. 
do {} while ()을 사용하면 조건과 상관없이 최소한 한 번은{ }안의 내용을 실행할 수 있습니다.\
그리고 for 루프를 두 번 중첩해서 돌면서 “#”을 출력합니다.첫 번째 루프에서는 변수 i를 기준으로 n번 반복하고, 
그 안의 내부 루프에서는 변수 j를 기준으로 n번 반복합니다.내부 루프에서는 “#”을 출력하고, 
내부 루프가 끝날 때마다 줄바꿈을 수행합니다.따라서 최종적으로는 가로가 n개, 세로가 n개인 “#”이 출력되게 됩니다. */ 