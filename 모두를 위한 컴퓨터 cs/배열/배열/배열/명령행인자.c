#include <stdio.h>
#include <cs50.h>

//int main(void)
int main(int argc, string argv[]) 
{
	if (argc == 2) // ����ڰ� ������Ʈ�� �ܾ� 2���� �Է��޴ٴ� ��.
	{
		printf("hello, %s\n", argv[1]);
	}
	else
	{
		printf("hello, world\n");
	}
}

/*
command-line arguments(����� ����)
��ɾ� �ڿ� ���� ���α׷��� �Է°� ���� �־��ִ� �����̴�.
-o 
clang�� �⺻������ a.out������ ���������
-o hello ���� ��ɾ �߰��ϸ�
���ϴ� ���Ϸ� ����� �ٲ� �� �־���.

int main(int argc, string argv[])
�����Լ��� �ΰ��� ���ڸ����� int, string�� �迭  
argv�� �������� ǥ�� ���� ���� ���ڵ��� �迭�̶�� ��.
argc��� int ������ ���� ������ ����.
argc�� maint �Լ��� �ް� �� �Է��� ����.

./��������� David
���: hello, David
���α׷� �̸� �ڿ� �ܾ �Է��ϸ� �� �ܾ���� argv��� �迭�� ����.
�׸��� argc���� �ܾ��� ������ ����ȴ�.

main �ڿ� �ΰ��� ������ ����
1. ����� ���ڸ� �޴°�.           int main(int argc, string argv[])
2. ����� ���ڰ� �ʿ���ٰ� �ϴ°�.int main(void)

main �Լ��� ��ȯ���� �մ°ɱ�?
Ư���� �ǹ̰� ����(���ʿ����� �ǹ� o �߿� x) 
C�� main �Լ��� �⺻������ ��ȯ���� ������.
main�� 0�� ��ȯ�Ѵ�
��ǻ�� ���� 0�� ���� ���������� �ǹ�.  
0�� ���� �ǹ� 
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
!=(�����ʴٴ� ��)
*/