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
			// �빮�ڷ� ��ȯ
			printf("%c", (int)s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}*/
		printf("%c", toupper(s[i])); // ctype.h�� ����ִ� toupper �ҹ��� �빮�� ��ȯ�� �Լ�. �ҹ��� ������ �빮�� ��ȯ, �Է��� �ҹ��ڰ� �ƴϸ� �׳� �״�� ��ȯ.
	}
	printf("\n");
}

/*
���ڿ� Ȱ��

strlen ���ڿ� ���� ���� �ϴ°�.

�ƽ�Ű�ڵ忡�� �빮�ڿ��� 32���ϸ� �����ϴ� �ҹ��ڰ� ����.(�׷��� �߿������ʰ�)

�ٸ� ����� ������� ����� �Լ��� ����ϴ°��� �߿�.


*/