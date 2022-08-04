// 조건/ 분기 , if else, break , continue, switch

#include <time.h> //랜덤 이용할려면 써야함.
#include <stdio.h>


int main(void)
{
	//버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 :20세)
	/*int age = 25;
	// if (조건) {    } else {    }
	if (age >= 20)
	{
		printf("일반인 입니다\n");
	}
	else
	{
		printf("학생입니다\n");
	}*/

	// 초등학생(8~13) / 중학생(14~16) /고등학생(17~19)으로 나누면?
	// if / else if / else 

	/*int age = 20;
	if (age >= 8 && age <= 13) //&&의미 앞에 조건과 뒤에 조건이 둘다 만족할때를 의미한다.
	{
		printf("초등학생입니다\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다\n");
	}
	else if (age >= 17 && age <= 19) //else if 는 여러번 나올수 있다.
	{
		printf("고등학생입니다\n");
	}
	else // 모든조건에 만족하지않을떄 esle로온다.
	{
		printf("학생이 아닌가봐용\n");
	} */


	//break/ continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++)
	{
		if(i >=6 )
		{
			printf("나머지 학생은 집에 가세요\n");
			break; //이 조건이 맞을떄 for문을 탈출하도록 하는것이 beeak
		}
		printf("% d 번 학생은 조별 발표 준비를 하세요\n", i);
	}*/

	// 1번부터 30번까지 잇는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세용
	/*for (int i = 1; i <= 30; i++)
	if (i >= 6 && i <= 10)
	{
		if (i == 7) //if 문 내에서 if문은 언제든 또 사용가능
		{
			printf("%d번 학생은 결석입니다\n", i);
			continue; // continue는 이 조건에 들어왔을떄 그 이후에 있는 문장을 실행하지않고 바로 다음방법 으로넘어감 여기서는 7번 결석출력하고 8로 조별발표 실행함.
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	}*/


	// && ||
	/*int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d) //&&는 양쪽이 다 성립되면 실행하는거고 and , ||는 둘중에 하나의 조건만 성립되도 실행하는거 or
	{
		printf("a와 b, 혹은 c 와 d 의 값이 값습니다\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/

	//가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3; //0~2 반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}*/

	//가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3;  //0~2 반환
	switch(i)  // swich는 어떤 값을 받아서 값이 해당하는 경우에 맞도록 출력 //위에 거랑 흡사하지만 똑같지는않음
	 {
	case 0:printf("가위\n"); break; //break 없으면 경우 수행하고 아래것도 무조건 수행한다. 
	case 1:printf("주먹\n"); break;
	case 2:printf("보\n"); break;
	default:printf("몰라요\n"); break;
	}*/




	/*int age = 14;
	switch (age)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:printf("초등학생입니다\n"); break; //이게 8에 break가 없으니까 8이로 지정하면 13 break 있으니까 초등학생입니다 출력.
		case 14:
		case 15:
		case 16:printf("중학생입니다\n"); break;
		case 17:
		case 18:
		case 19:printf("고등학생입니다\n"); break;  //case 어떤 경우를 만낫을떄 그문장 끝에 break 있으면 이후 case는 실행안하고 끝나지만 break없으면 밑에 케이스는 비교안하고 실행안하기떄문에 저렇게 압축가능.
		dafault : printf("학생이 아닌가봐용\n"); break;  
	}*/
	

	//Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; //1~100 사이의 숫자 뽑기
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0) // while (1) 가능 왜나하면 1 : 참, 0 : 거짓  ,while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞쳐보세여 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다 !\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생햇어요\n\n");
		}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용, 실패용\n");
			break;
		}
	}
	return 0;
}
