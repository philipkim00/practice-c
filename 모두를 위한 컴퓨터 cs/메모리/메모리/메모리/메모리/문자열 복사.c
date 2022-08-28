/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
} */

/*
위의 코드 목적 
사용자로부터 문자열을 입력받아서
복사한 뒤 대문자로 바꾸는 것.

char *t = s;
이줄에서 t = s로 t라는 변수에 s를 복사함.말그대로 s를 복사함 
s는 주소이기 떄문에 주소를 복사하고있는것 그래서 둘다 대문자로 나옴

s와 t안에 모두 0x123(주소 예시)를 적었을 것. 코드상에서 t의 첫 글자를 
가져와 대문자로 바꾸라고 하면 t의 첫글자는 e이고 s안에 첫글자도 e이고 동일한 e이다.
다른 자료형처럼 t= s 라고 적으면 문자열은 복사하지 않는다.  
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main_e(void)
{
    char* s = get_string("s: ");
    char* t = malloc(strlen(s) + 1); //C에서는 malloc라는 메모리 할당 함수 있슴. 인자로 받는것은 할당받을 메모리 크기.

    /*for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }*/
    strcpy(t, s); //위에 것을 누가 함수처럼 만들어둔것.

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
    /*
    i < n + 1;
    +1하는 이유는 널 종단 문자까지 복사 하기 위해서.

    strlen을 사용할려면 string.h를 불러와야 함.

    */