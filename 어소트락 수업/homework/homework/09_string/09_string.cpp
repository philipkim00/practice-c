#include <iostream>
#include <string> // 3 문제풀떄 

char str[6] = "hello"; //배열을 넘기는걸 안배워서 전역변수로 이걸 선언해야함.

int myStrLen() //4를 함수로 만든것. 
{
	int len = 0;
	for (size_t i = 0; i < 6; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
			break; //탈출해도되고 
			/*return len;*/  //반환해서 끝내도 되고,
		}
	}

	return len;
}
int main()
{
	//2 std::cout << "hello";

	char ch = 'A'; //1글자하나 저장할떄.

	//1 int arr[10]; 숫자 여러개 저장할떄 인트형 배열에 저장했슴.
	//2 문자열 초기화 방법 1,2
	//2 문자또한 char형 배열에 저장하면됨.
	//2char str[6] = { 'h', 'e', 'l', 'l', 'o', '\n'}; //널 문자 문자열의 끝을 알려줌. //
	char str[6] = "hello"; 
	std::cout << str;	//2 char str[5]해놓고 디버깅하면 이상한 문자들이 뒤에 출력됨. 
						//이유: 기본적으로 컴퓨터는 문자와 글자를 구분못함. 그래서 \0(널문자) 필요함을 넣어야함.
	

	//4int len = 0;
	//4for (size_t i = 0; i < 6; i++)
	//4{
	//4	if (str[i] == '\0')
	//4	{
	//4		len = 0;
	//4	}
	//4}
	// 
	//4}

	int len = myStrLen(); //4

	int len2 = strlen(str); //5 이미 구현된 함수지만 공부할동안은 사용하지않을것.

	//5 기초  2주정도만 노가다.
	
	// 3 std::string str2 = "ASFDVD"; 일단 사용 x

	//3 str2. += "hello"; 일단 사용 x


	return 0;
}



