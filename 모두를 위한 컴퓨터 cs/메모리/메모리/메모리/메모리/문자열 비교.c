/*#include <stdio.h>

int main(void)
{
	char* s = "EMMA";
	printf("%c\n", *s);
	//printf("%c\n", s[1]);
	printf("%c\n", *(s + 1));
	printf("%c\n", *(s + 2));
	printf("%c\n", *(s + 3));
} */

/*
위의 코드에서
s에 있는 주소로 가면 그안에 뭐가 있냐?
EMMA 이름의 첫 글자이다. s는 어떤 문자의 주소이고
s로 찾아가면 E가있다. 
s가 이름 첫 글자의 주소라면 
*s는 그 문자로 가달라는 것.

printf("%c\n", s[1]);
이걸 쓰면 실제로 컴퓨터 내부에서는 
printf("%c\n", *(s + 1)); 
이렇게 연산함.

왜 s를 출력하면 한글자가 아니라 문자열이 출력되냐?

printf의 형식 지정자가 해주는 것.
printf 에서 %s를 사용해서 출력을 요청하면 
그 주소로 가서 첫 글자만 출력하는게 아니라
다음 문자를 게속 출력함 널 종단 문자를 만나기 전까지.

*/


#include <stdio.h>

int main_d(void)
{
    // 사용자로부터 s와 t 두 개의 문자열 입력받아 저장
    //int s = get_int("i: ");
    //int t = get_int("j: ");
    char *i = get_string("i: ");
    char *j = get_string("j: ");

    // 두 문자열을 비교 (각 문자들을 비교)
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

/*
저 위의 코드는 인트할떄는 같은 숫자를 넣으면 같다고 뜨는데 

왜 문자열로 바꿧을떄는 같은 문자를 넣어도 다르다고 뜰까?
사용자가 동일한 내용을 입력했을 수 잇지만
같은 곳에 있다는 의미는 아님.(주소가 다르게 저장됨.)

get_string은 
메모리 공간의 첫 바이트 주소를 반환하게 되어 있다.
*/