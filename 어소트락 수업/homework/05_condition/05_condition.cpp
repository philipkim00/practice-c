#include <iostream>

int main()
{
	//int x = 100;

	//if (x == 50)
	//{
	//	std::cout << "x는 50입니다";
	//}
	//else
	//{
	//	std::cout << "x는 50이 아닙니다";
	//}


	 // 1왼쪽 2 오른쪽 3 위 4 아래
	//int  inputDirection = 3;

	//if (inputDirection == 1)
	//{
	//	std::cout << "왼쪽으로 1칸이동";
	//}
	//else if (inputDirection == 2)
	//{
	//	std::cout << "오른쪽으로 1칸이동";
	//}
	//else if (inputDirection == 3)
	//{
	//	std::cout << "위로 1칸이동";
	//}
	//else if (inputDirection == 4);
	//{
	//	std::cout << "아래로 1칸이동";
	//}


	//비행기 게임의 경우 else if 는 수행하면 바로 내려가기 때문에
	// if문을 써야한다. 다 따로따로 걸수 있게.
	int  inputDirection = 3;

	if (inputDirection == 1)
	{
		std::cout << "왼쪽으로 1칸이동";
	}
	
	if (inputDirection == 2)
	{
		std::cout << "오른쪽으로 1칸이동";
	}
	
	if (inputDirection == 3)
	{
		std::cout << "위로 1칸이동";
	}

	if (inputDirection == 4);
	{
		std::cout << "아래로 1칸이동";
	} 


	return 0;
}

	/*
	코드를 실행할떄 보면 
	케릭터 이동할떄
	누른것에 만큼 작동하는것.
	
	if(조건)
	{
	
	}
	조건이 참이면 if 안에 구문 수행
	else
	{
		조건이 거짓이면 실행.
	}

	if 조건문은 대괄호 생략할수있지만
	아래 한줄만 할려면 대괄호 생략해도 되지만 
	두번쨰 줄부터는 커버 못해서 그냥 대괄호 쓰기.

	조건이 여러가지이면 
	else if 사용해라.
	*/