//반복문 for ,while ,do while

#include<stdio.h>		

int main(void) //그전에 메인함수를 ㎢摸 그전에 ㎢ 메인함수명을 바꾼다.
{
	/*printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");*/

	// ++ 뿔뿔  
	/*int a = 10;
	printf("a 는 %d\n",a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);*/

	/*int b = 20;
	// b= b+1 
	printf("b 는 %d\n", ++b); //그 문장에서 뿔뿔 동작을 먼저 수행하고 문장을 끝내라 21
	printf("b 는 %d\n", b++); //문장을 수행하고 나서 ++동작을 수행해서 다음문장으로 넘어가서 시행
	printf("b 는 %d\n", b); //그러므로 22출력됨*/

	/*int i = 1;
	printf("Hello World %d\n", i++); //1
	printf("Hello World %d\n", i++); //2
	printf("Hello World %d\n", i++); //3
	printf("Hello World %d\n", i++); 
	printf("Hello World %d\n", i++); 
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++); //10 */

	// 반복문
	// for, while , do while

	//for(선언; 조건; 종감) { }

	/*for (int i = 1; i <= 10; i++)  //for 문에서 i는 1이라고 지정하고 i 조건이 맞으면 안에 있는 내용을 수행하고 나면 증감으로들가서 하기.
	{
		printf("Hello World %d\n", i);
	}*/

	// while (조건)  { }
	
	/*int i = 1; //while 문에서 변수 선언할는 while밖에서 선언한다.
	while (i <= 10) //조건
	{
		printf("Hello World %d\n", i++); //아래에 i++헤도되고 프린트 함수안에 넣어도되고.
		// i++; // 증감
	} */

	
	// do { } while (조건);
	
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10); */

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번 반복문 : %d\n", i);

			for (int j = 1; j <= 5; j++)
			{
				printf("    두 번 반복문 : %d\n", j);
			}
	}*/

	//구구단
	//2x 1=2
	//2x 2=4
	//2x 3=6
	//2x 4=8 ...
	// ...
	//9x9 =81
	
	/*for (int i = 1; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d x %d = %d\n", i, j, i*j);
		}
	} */ //이 수많은 문장을 줄일수 잇는게 강력한 특징이다.

	//이중 반복문 파헤치기
	/*
	
	*
	**
	***
	****
	******
	
	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)      
		{
			printf("*");                     //해설 나도코딩 c 기초 1시간에 있슴
		}
		printf("\n");  //줄바꿈 안하면 연속적으로 나와서 꼭해야함.
	}*/

	

	/*

	  ssss*
	  sss**
	  ss***
	  s****
	  *****

	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)  //0~4까지 같으니까 5=5 인데 j는 <5-1 이니까 빈칸 4번만 생성
		{
			printf(" ");
		}
			for (int k = 0; k <= i; k++)
			{
				printf("*");
			}
			printf("\n");
		}*/

//피라미드를 쌓아라 프로젝트

/*

ssss*
sss***
ss*****
s*******
*********
 
*/


int floor;
printf("몇 층으로 쌓겟느냐?");
scanf_s("%d", &floor);
for (int i = 0; i < floor; i++)
{
	for (int j = i; j < floor - 1; j++)  
	{
		printf(" ");
	}
	for (int k = 0; k < i * 2 + 1; k++)
	{
		printf("*");
	}
	printf("\n");
}

	return 0;
}

