//�ݺ��� for ,while ,do while

#include<stdio.h>		

int main(void) //������ �����Լ��� ���ٸ� ������ ���� �����Լ����� �ٲ۴�.
{
	/*printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");*/

	// ++ �Ի�  
	/*int a = 10;
	printf("a �� %d\n",a);
	a++;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);*/

	/*int b = 20;
	// b= b+1 
	printf("b �� %d\n", ++b); //�� ���忡�� �Ի� ������ ���� �����ϰ� ������ ������ 21
	printf("b �� %d\n", b++); //������ �����ϰ� ���� ++������ �����ؼ� ������������ �Ѿ�� ����
	printf("b �� %d\n", b); //�׷��Ƿ� 22��µ�*/

	/*int i = 1;
	printf("Hello World %d\n", i++); //1
	printf("Hello World %d\n", i++); //2
	printf("Hello World %d\n", i++); //3
	printf("Hello World %d\n", i++); 
	printf("Hello World %d\n", i++); 
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++); //10 */

	// �ݺ���
	// for, while , do while

	//for(����; ����; ����) { }

	/*for (int i = 1; i <= 10; i++)  //for ������ i�� 1�̶�� �����ϰ� i ������ ������ �ȿ� �ִ� ������ �����ϰ� ���� �������ε鰡�� �ϱ�.
	{
		printf("Hello World %d\n", i);
	}*/

	// while (����)  { }
	
	/*int i = 1; //while ������ ���� �����ҋ��� while�ۿ��� �����Ѵ�.
	while (i <= 10) //����
	{
		printf("Hello World %d\n", i++); //�Ʒ��� i++�쵵�ǰ� ����Ʈ �Լ��ȿ� �־�ǰ�.
		// i++; // ����
	} */

	
	// do { } while (����);
	
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10); */

	// 2�� �ݺ���
	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù ���� �ݺ��� : %d\n", i);

			for (int j = 1; j <= 5; j++)
			{
				printf("    �� ���� �ݺ��� : %d\n", j);
			}
	}*/

	//������
	//2x 1=2
	//2x 2=4
	//2x 3=6
	//2x 4=8 ...
	// ...
	//9x9 =81
	
	/*for (int i = 1; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d x %d = %d\n", i, j, i*j);
		}
	} */ //�� ������ ������ ���ϼ� �մ°� ������ Ư¡�̴�.

	//���� �ݺ��� ����ġ��
	/*
	
	*
	**
	***
	****
	******
	
	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)      
		{
			printf("*");                     //�ؼ� �����ڵ� c ���� 1�ð��� �ֽ�
		}
		printf("\n");  //�ٹٲ� ���ϸ� ���������� ���ͼ� ���ؾ���.
	}*/

	

	/*

	  ssss*
	  sss**
	  ss***
	  s****
	  *****

	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)  //0~4���� �����ϱ� 5=5 �ε� j�� <5-1 �̴ϱ� ��ĭ 4���� ����
		{
			printf(" ");
		}
			for (int k = 0; k <= i; k++)
			{
				printf("*");
			}
			printf("\n");
		}*/

//�Ƕ�̵带 �׾ƶ� ������Ʈ

/*

ssss*
sss***
ss*****
s*******
*********
 
*/


int floor;
printf("�� ������ �װٴ���?");
scanf_s("%d", &floor);
for (int i = 0; i < floor; i++)
{
	for (int j = i; j < floor - 1; j++)  
	{
		printf(" ");
	}
	for (int k = 0; k < i * 2 + 1; k++)
	{
		printf("*");
	}
	printf("\n");
}

	return 0;
}

