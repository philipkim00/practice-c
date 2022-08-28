/*
문자열(string)

string s = "EMMA";
컴퓨터 안에서는 메모리 속 어딘가에 5바이트 공간에 저장되있음(EMMA\0)

s라는 포인터는 처음 시작 시작하는 문자인(E)의 주소값밖에 모름 그렇지만 컴퓨터는 똑똑해서
문자열의 첫 번쨰 글자만 가리키면 널 종단 문자를 마주칠 떄까지 루프를 돌면서 끝을 알아낸다.

string s = "EMMA";는 
char *s = "EMMA"; 로 적을수 있다.
문자열은 문자들의 나열이기때문에 따라서 결국 문자열은 
문자 배열의 첫번쨰 바이트 주소가된다.

typedef struct
{
	string name;
	string number;
}
person;
이걸 간단하게 할수있다.

typedf char *string 
typedf는 새로운 자료형을 선언하는 의미.
char *는 이 값의 형태가 문자의 주소가 될 것이라는 의미.
string은 이 자료형의 이름을 의미.

string은 어떤 char의 주소를 가지고 있는 변수이다.
*/

//string 자료형을 이용해서 엠마 출력.
/*#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string s = "EMMA";
	printf("%s\n", s);
}*/

#include <stdio.h>

int main_c(void)
{
	const char *s = "EMMA";
	printf("%p\n", s);
	printf("%p\n", &s[0]);
}

/*
둘의 주소가 같은 이유는
C에서 s의 주소는 사실상 첫 번쨰 문자의 주소 이를 확인해보기 위해 &s[0] 하면 주소는 똑같음.


*/