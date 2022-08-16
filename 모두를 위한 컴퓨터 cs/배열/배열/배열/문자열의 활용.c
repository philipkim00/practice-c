#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	/*
	string s = get_string("Input: ");
	printf("Output: ");
	int n = strlen(s);
	//for (int i = 0; s[i] != '\0'; i++)
	//for (int i = 0; i < strlen(s); i++)
	for (int i = 0; i < n; i++)

	{
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
	*/

	string s = get_strintf("Before: ");
	printf("After: ");
	for (int i = 0; n = strlen(s); i < n; i++)
	{
		/*if (s[i] >= 'a' && s[i] <= 'z')
		{
			// 대문자로 변환
			printf("%c", (int)s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}*/
		printf("%c", toupper(s[i])); // ctype.h에 들어있는 toupper 소문자 대문자 변환기 함수. 소문자 넣으면 대문자 반환, 입력이 소문자가 아니면 그냥 그대로 반환.
	}
	printf("\n");
}

/*
문자열 활용

strlen 문자열 길이 정의 하는것.

아스키코드에서 대문자에서 32더하면 대응하는 소문자값 나옴.(그렇게 중요하지않고)

다른 사람이 만들어준 도우미 함수를 사용하는것이 중요.


*/