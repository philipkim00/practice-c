#include <stdio.h>

int main_array12(void)
{

	int scores[3]; // 3개의 변수, 세개의 값을 하나의 변수에 저장하기 위한 공간을 의미.
	scores[0] = 72; //배열 역시 0에서 부터시작.
	scores[1] = 73;
	scores[2] = 33;
	/*int score1 = 72;
	int score2 = 73;
	int score3 = 33; */

	//printf("Average: %i\n", (score1 + score2 + score3) / 3);
	printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / 3);

	return 0;
}

/*
1. 부정적합 소수점이 무시된다.
2. 디자인 개선의 여지가 있다.

C에서는 여러 개의 값을 가진 하나의 변수를 만들고 싶을 떄
배열이라고 하는 걸 사용한다.
배열은 값들의 리스트로 모두 같은 자료형의 값들이
같은 이름의 변수에 저장되는것.
[](대괄호) 사용해서 원하는 점수의 개수를 적고
세미콜론 붙이면 끝
= 컴퓨터 에게 정수 3개를 위한메모리를 달라고 하는것.

*/
