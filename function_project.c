#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();


int main(void)//void : 아무것도 받지 않는 전달값이 없는 main이라는 함수 정수형 반환하는 함수
{
	//문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제(랜덤)
	// 맞히면 통과, 틀리면 실패

	srand(time(NULL));
	int count = 0; //맞힌 문제 갯수
	for (int i = 1; i <= 5; i++)
	{
		// x*y =?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d x %d ?", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("프로그램을 종료합니다\n");
			exit(0); // break는 이 for문을 탈출하는거고 exit는 뒤에 어떤 문장이 오던 바로종료.
		}
		else if (answer == num1 * num2)
		{
			//성공
			success();
			count++;
		}
		else
		{
			//실패
			fail();
		}
	}

	printf("\n\n 당신은 5개의 도어락 비밀번호 중 %d 개를 맞혔습니다\n", count);

		return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;  //rand 함수를 뽑고 정의된 수까지 뽑는다. 
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n\########## %d 번쨰 비밀번호 ########n", level);
	printf("\n\t %d x %d 는?\n\n", num1, num2); //\t는 탭 치는의미.탭==(스페이스 8칸)
	printf("#######################################n");
	printf("\n비밀번호를 입력하세요 (종료 :-1) >>");
}
void success()
{
	printf("\n >> good ! 정답입니다 \n");
}
void fail()
{
	printf("\n >> 떙 ! 틀렸습니다 \n");
}

