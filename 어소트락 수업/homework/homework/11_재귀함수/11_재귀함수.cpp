#include <iostream>

int arr[256] = { 1, 2,3,4 }; //2

void dfs1(int level) //1
{
	std::cout << arr[level]; //2
	if (level == 3)
		return;

	dfs1(level + 1);	//1 나를 그대로 호출(재귀함수). // 디버깅하면 이름만 같은 다른 함수가 계속 호출됨
			// 그래서 스택오버플로우 발생함.
			// 디버거
			
}

void dfs(int level)
{
	if (level == 2)
		return;

	dfs(level + 1);
	dfs(level + 1);
}

int main()
{
	// dfs1(0); //1

	dfs(0);
	
	// 2
	//for (size_t i = 0; i < 4; i++)
	//{
	//	std::cout << arr[i];
	//	std::cout << arr[i]; std::cout << arr[i];
	//}

	return 0;
}

/*
1알고리즘 자료구조 최적화 고민단계는 
	게임다 만들고 결과물 만들고 해라.

1숙제도 걍 실행만되면 넘기기. 시간남으면 보기.

1디버깅모드로 20fps나오면 릴리스모드는 60fps나옴.


2
재귀함수 쓰는이유.
메인함수의 가독성 떄문에 쓴다.

*/