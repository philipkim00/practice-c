#include <iostream>

int main()
{


	int age = 100;

	//입력
	//std::cin >> age;

	std::cout << "나의 이름은 : 김민혁 \n";
	std::cout << std::endl; /*\n*/

	std::cout << "나의 나이는 : ";
	std::cout << age;
	std::cout << std::endl; /*\n*/

	char blood = 'A';
	std::cout << "나의 혈액형은 : ";
	std::cout << blood; 
	std::cout << std::endl; /*\n*/

	printf("%d", blood);  //이런식으로 정수형이라 65가 나옴.
	//printf("%d", age); 
	
	// c에서 많이씀
	// 어떤 형식으로 출력해줄건지 앞에 지정해줘야함. 
	// 시간적으로 손해다.

	//cout은 시간상 유리하다. 형식을 정해줌.




	return 0;
}

/*
글자는 큰따음표안에 한다.

개행문자 
\n 

개행 함수 
std::endl;
*/