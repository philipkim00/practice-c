//�Լ��� x(�Է�)- ����?(�˰���)- ����� �Է°��� �޾Ƽ� ������ ó���ϰ� ��� ����ϴ°�.

#include<stdio.h>
#include<time.h>

// ����
void p(int num); // ���� �Լ� ���ʿ��� ���� �� p��� �Լ��� ���ž�

void function_without_return(); //������ ����
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); //��ü total ������ ate ���� �԰� ���� ���� ��ȯ

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void)
{
	//function
	//�Ի��
	
	/*int num = 2;
	//printf("num �� %d �Դϴ�\n", num);
	p(num); // p��� �Լ��� ȣ���ϰ� �׋� num������ ���� �����ڴ�.

	// 2 +3�� ?
	num = num + 3; // num += 3
	//printf("num �� %d �Դϴ�\n", num); //5
	p(num);

	// 5 -1
	num -= 1; //num = num-1
	//printf("num �� %d �Դϴ�\n", num); //4    ���⼭ ����Ǵ� �κ��� �Լ�ȭ�ؼ� ����Ǵ� �κ��� �����ϰ� �Ҽ�����.
	p(num);

	// 4 x 3 ��?
	num *= 3; //num= num*3
	//printf("num �� %d �Դϴ�\n", num); //12
	p(num);

	// 12/6 ��?
	num /= 6; //num = num/6
	//printf("num �� %d �Դϴ�\n", num); // 2
	p(num); */

	//�Լ� ����
	// ��ȯ���� ���� �Լ�
	// function_without_return(); �̰Ŵ� ��ȯ���̾�� ������ ���ʿ���� 

	// ��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return(); //�̰Ŵ� ��ȯ���� �ֱ⶧���� ������ ���� ==int ret(����)
	p(ret); */

	// �Ķ����(���ް�)�� ���� �Լ�
	//function_without_params();


	//�Ķ����(���ް�)�� �ִ� �Լ�
	//function_with_params(35, 20, 25);

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); // 5���� ��� �߿��� 2���� �Ծ����
	//printf("��� 5�� �߿� 2���� ������? %d ���� ���ƿ�", ret);
	//printf("��� %d�� �߿� %d ���� ������? %d ���� ���ƿ�", 10, 4, apple(10, 4));



	//���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	return 0;
} 

//����
void p(int num) //�Ȱ��� ������ �ְ� �߰�ȣ ����ä���.
{
	printf("num �� %d �Դϴ�\n", num);
}
// ���ް� : 36
// �Լ� : �� + 4
// ��ȯ�� : ?

/*��ȯ�� �Լ��̸�(���ް�) //��ȯ�̶� �Լ����� ������ �����ϰ��� ��ȯ���ִ� ��.
{

} */

//int/*void*/ �Լ��̸�(int num, int num2, char c, float f) //��ȯ���� �츮�� �������ִ� �Ϳ� �°� ���� �����ϱ� ����� int void�� ��ȯ�����ʰڴ�. ���ް��� �츮�� ���Ҽ��ִ�. �̸��ٸ����ؼ� �������Ҽ��ִ�.
//{                                                        // �Ʒ��� ������ ���� �Լ� ���ʿ� ������ �����ؾ���.
//	return num + 4; 
//} 

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��ִϴ�\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�\n",
		num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�\n");
	return total - ate;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2) 
{
	return num1 / num2;
}

// �Լ��� ���α׷��Ҷ� ������ ��� ���� �� ������
// �߿��ѰŴ� �����Լ� ������ �Լ� �����ϰ�, �Ʒ����� ����
// �Լ� ������ x 