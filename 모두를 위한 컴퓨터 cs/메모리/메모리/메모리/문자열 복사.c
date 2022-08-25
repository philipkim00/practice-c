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
���� �ڵ� ���� 
����ڷκ��� ���ڿ��� �Է¹޾Ƽ�
������ �� �빮�ڷ� �ٲٴ� ��.

char *t = s;
���ٿ��� t = s�� t��� ������ s�� ������.���״�� s�� ������ 
s�� �ּ��̱� ������ �ּҸ� �����ϰ��ִ°� �׷��� �Ѵ� �빮�ڷ� ����

s�� t�ȿ� ��� 0x123(�ּ� ����)�� ������ ��. �ڵ�󿡼� t�� ù ���ڸ� 
������ �빮�ڷ� �ٲٶ�� �ϸ� t�� ù���ڴ� e�̰� s�ȿ� ù���ڵ� e�̰� ������ e�̴�.
�ٸ� �ڷ���ó�� t= s ��� ������ ���ڿ��� �������� �ʴ´�.  
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main_e(void)
{
    char* s = get_string("s: ");
    char* t = malloc(strlen(s) + 1); //C������ malloc��� �޸� �Ҵ� �Լ� �ֽ�. ���ڷ� �޴°��� �Ҵ���� �޸� ũ��.

    /*for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }*/
    strcpy(t, s); //���� ���� ���� �Լ�ó�� �����а�.

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
    /*
    i < n + 1;
    +1�ϴ� ������ �� ���� ���ڱ��� ���� �ϱ� ���ؼ�.

    strlen�� ����ҷ��� string.h�� �ҷ��;� ��.

    */