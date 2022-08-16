#include <stdio.h>
#include <cs50.h>

//int main(void)
int main(int argc, string argv[]) 
{
	if (argc == 2) // 사용자가 프롬프트에 단어 2개를 입력햇다는 뜻.
	{
		printf("hello, %s\n", argv[1]);
	}
	else
	{
		printf("hello, world\n");
	}
}

/*
command-line arguments(명령행 인자)
명령어 뒤에 쓰고 프로그램의 입력과 같이 넣어주는 인자이다.
-o 
clang은 기본적으로 a.out파일을 출력하지만
-o hello 같은 명령어를 추가하면
원하는 파일로 출력을 바꿀 수 있엇다.

int main(int argc, string argv[])
메인함수가 두개의 인자를받음 int, string의 배열  
argv는 관습적인 표현 인자 백터 인자들의 배열이라는 뜻.
argc라는 int 변수로 인자 개수를 뜻함.
argc는 maint 함수가 받게 될 입력의 개수.

./명령행인자 David
출력: hello, David
프로그램 이름 뒤에 단어를 입력하면 그 단어들은 argv라는 배열에 들어간다.
그리고 argc에는 단어의 개수가 저장된다.

main 뒤에 두가지 선택지 생김
1. 명령행 인자를 받는것.           int main(int argc, string argv[])
2. 명령행 인자가 필요없다고 하는것.int main(void)

main 함수는 반환값이 잇는걸까?
특별한 의미가 없다(기초에서는 의미 o 중요 x) 
C의 main 함수는 기본적으로 반환값을 가진다.
main은 0을 반환한다
컴퓨터 에서 0은 보통 문제없음을 의미.  
0은 좋은 의미 
*/


#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
	if (argc != 2) 
	{
		printf("missing command-line argument\n");
		return 1;
	}
	printf("hello, %s\n", argv[1]);
	return 0;
}

/*
!=(같지않다는 뜻)
*/