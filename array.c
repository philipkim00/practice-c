#include <stdio.h>

int main(void)
{
	// �迭
	//�������������������� �迭�� ����ö ��ĭ�� int ������ ���� ���ӵ� ������ ������ �����ؼ� ����°�.

	/*int subway_1 = 30; // ����ö 1ȣ������ 30���� Ÿ�� �ִ�.
	int subway_2 = 40;
	int subway_3 = 50;
	
	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_3);*/
	
	// ���� ���� ������ �Բ�, ���ÿ� ����
	/*int subway_array[3];  //[0][1][2] 0���ͽ���.                            //[3] ���ȣ�ȿ� ���� �ǹ� ��� ĭ�� �������̳� int������ �������̳�. 
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", i + 1, subway_array[i]);
	}*/

	//  �� ���� ���
	/*int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// ���� �׻� �ʱ�ȭ�� �ݵ�� �ؾ���. ��? �̷��� �ϸ� ������ ������ ����.
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// �迭 ũ��� �׻� ����� ����
	/*int size = 10; 
	int arr[size�� �ƴ� 10];*/

	/*int arr[10] = { 1, 2 }; // 3���� �����ʹ� �ڵ����� '0'���� �ʱ�ȭ ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1, 2 }; // arr[2]�� ����

	/*float arr_f[5] = {1.0f,2.0f, 3.0f};
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	// ����(�ѱ���) vs ���ڿ�(�ѱ��� �̻��� ��������)
	/*char c = 'A';
	printf(" %c\n", c);*/

	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0' �� ���ԵǾ�� �� �ȵǸ� �̻��� ���ڶ�(����)
	//char str[6] = "coding"; //[c] [o] [d] [i] [n] [g] 
	/*char str[7] = "coding"; //[c] [o] [d] [i] [n] [g] [\0]
	printf("%s\n", str);*/

	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/ //sizeof(str) �迭�� ������ ������ ũ�⸦ ��Ÿ���°�. 

	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]); //�̷����ϸ� coding �� �ѱ��ھ� ����
	} */

	/*char kor[] = "�����ڵ�"; // 2����Ʈ*4 +���� ��Ÿ�°� 1����Ʈ �׷��� 9����Ʈ
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// ���� �ѱ��� : 1 byte(�޸𸮰���)
	// �ѱ� �ѱ��� : 2 byte
	// �� ��
	// En gl ish
	// char ũ�� : 1byte */

	//char c_array[7] = {'c','o','d','i','n','g','\0'};
	/*char c_array[6] = {'c','o','d','i','n','g'}; //�̻��� ���ڶ�
	printf("%s\n", c_array); */

	//char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);   //��ĭ���� ���� ����.. �ڵ��̶�� �� ����̵ǰ� \0 �� ���°����� ������ ���� �ڵ����ε�??
	}*/
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%d\n", c_array[i]);  //ASCll �ڵ� �� ���(null ���� 0���� �Էµ�)
	}*/

	// ���ڿ� �Է¹ޱ� : ������ ���� ���� ����
	/*char name[256]; //256���� ũ���� �ش��ϴ� �迭�޵�� %s �Է¹޾Ƽ� name�̶���� �迭�� ���� �Է¹���
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	//���� : ASCII �ڵ�? ANSI (�̱�ǥ����ȸ)���� ������ ǥ�� ü��
	// 7bit. �� 128�� �ڵ�(0~127)
	// a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
	// A : 65
	// 0 : 48

	/*printf("%c\n", 'a'); //a
	printf("%d\n", 'a'); //97

	printf("%c\n", 'b'); //b
	printf("%d\n", 'b'); //98

	printf("%c\n", 'A'); //A
	printf("%d\n", 'A'); //65

	printf("%c\n", '\0'); //����
	printf("%d\n", '\0');*/ //0

	printf("%c\n", '0'); //0
	printf("%d\n", '0'); //48

	printf("%c\n", '1'); //1
	printf("%d\n", '1'); //49

	// ����2 : 0~127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	/*for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
	}*/
	return 0;
}