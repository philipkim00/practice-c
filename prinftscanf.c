#include <stdio.h>
int main_printscanf(void)
{
	//정수형 변수에 대한 예제
	/*int age = 23;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//실수형 변수에 대한 예제
	/*float f = 46.567f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n",d);*/
	
	//상수
	//const int YEAR = 2000; 
	//printf("태어난 년도 : %d\n", YEAR);

	//printf
	// 연산
	/*int add = 3 + 7; // 10
	printf("3+7=%d\n", add);
	printf("%d + %d= %d\n", 30, 78, 30 + 78);
	printf("%d x %d= %d\n", 30, 78, 30 * 78); */

	// scanf
	// 키보드 입력을 받아서 저장
	int input;
	/*printf("값을 입력하세요 : ");
	scanf_s("%d", &input); //%d 정수형값을 받겠다 어디에 &input이라는 변수에
	                             //&표시는 input이라는 정의된곳에 입력받겟다는의미.
	printf("입력값 : %d\n", input);*/
	
	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번쨰 값 : %d\n", one);
	printf("두번쨰 값 : %d\n", two);
	printf("세번쨰 값 : %d\n", three); */

	// 문자(한글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];     //char c같은 문자를 저장하기위한 변수를 256개를 연속으로만든다.
					   // 대괄호속에 숫자를 집어넣으면 큰 공간을 만든다.
	scanf_s("%s", str, sizeof(str)); //sizeof를 써서 크기를 명시 str같은 변수는 256개이기때문에
									// 256개보다 더큰 문제가 오면 문제가 발생할수도있어서 sizeof씀
	printf("%s\n", str);*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게 몇임? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("범죄명이 뭔가요? ");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름         : %s\n", name);
	printf(" 나이         : %d\n", age);
	printf(" 몸무게       : %.2f\n", weight);
	printf(" 키           : %.2lf\n", height);
	printf(" 범죄       : %s\n", what);
	return 0;
}