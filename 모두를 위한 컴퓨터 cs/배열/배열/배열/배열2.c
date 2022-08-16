#include <stdio.h>

//const int N = 3; //N(대문자) 적는건 관습 //const는 해당 변수를 상수로 바꾸는것. N을 어디서 사용하던 이제 N값은 같다 이것을 전역 변수., 함수 바깥에서 선언하는 변수,값을 수정하기좋다(맨위에 있어서)

float average(int lenght, int array[]); 

int main_array2(void)
{    // 사용자로부터 점수의 갯수 입력
	int n = get_int("Number of scores: ");
	// 점수 배열 선언 및 사용자로부터 값 입력
	int scores[n];

	for (int i = 0; i < n; i++)
	{
		scores[i] = get_int("Score %i: ", i + 1); // i + 1 값을 넣는 위치는 바꾸지않지만 보여지는 방식 바꿈.
	}


	/*int scores[N];
	scores[0] = 72; //배열 역시 0에서 부터시작.
	scores[1] = 73;
	scores[2] = 33;*/

	//printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / 3);
	
	// 평균 출력
	printf("Average: %.1f\n", average(n, scores));

	return 0;
}
//평균을 계산하는 함수
float average(int lenght, int array[]) //average함수는 float을 반환한다.
{
	int sum = 0;
	for (int i = 0; i < lenght; i++)
	{
		sum += array[i];  //sum = sum + array[]; // ++사용못하는건 1이 아닌 실제 값을 더해서
	}
	// return sum / lenght; 정수 / 정수 해서 소수점은 안나옴.
	return (float)sum / (float) lenght;
}

/*
배열2강 추가
저 코드의 문제점은 복사 붙여넣기를 하지말라는 원칙 어김
적어도 두 군데에서 반복함(int scores[3]; 여기 3하고 (scores[0] + scores[1] + scores[2]) / 3); 여기 3)
수 많은 버그의 원인이 될수 있다.(시간이 지나고 보면 저 코드가 같아야된다는걸 까먹음)

전역 변수
아래 코드에서 scores 배열의 크기를 정해주는 N이라는 변수를 새로 선언하였습니다.
만약 N이 고정된 값(상수)이라면 그 값을 선언할 때 const를 앞에 붙여서 전역 변수, 즉 코드 전반에 거쳐 바뀌지 않는 값임을 지정해줄 수 있습니다.
관례적으로 이런 전역 변수의 이름은 대문자로 표기 합니다.

점수의 평균을 구하는 예제에서, 동적으로 작성한 코드는 그렇지 않은 코드에 비해 어떤 장단점이 있을까요?
장점: 다양한 상황에서 사용이 가능하다. 수정에 용이하다.

단점: 코드가 길어진다.

평균은 소수점이 될수도있어서 double 이나 float 사용

99.49인데 %.1f를 사용하면 반올림해서 99.5나옴

int / float 하면더강력한 float 나옴.
*/


