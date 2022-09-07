#include <iostream>

int main()
{
    // 1초기값; 조건식; 증감식 이루어져 있고
    // 1일정 범위를 내가 반복할떄 자주 사용된다.
    int x = 0; //1 초기화 하면서 몇번 반복할건지 적어주는 공간
    
    //1for (초기화; 조건; 증감)
    //{

    //} 

   //5이건 x변수가 for문 밖에서 만들어짐.
    for (x = 1; x < 10; x++)
    {
        //4 break 문 가장 가까운 반복문을 빠져나간다
        //4if (x == 3)
        //4{
        //    break; //break주위에서 가장 가까운 반복문만 탈출!  
        //}

        //4 continue 특정 조건을 스킵을 하고싶다
        //4if (x == 3)
        //4{
        //4    continue;
        //4}

        std::cout << x;
    }

    //2while(조건) 참일 경우에 
    // 해당 반복문을 실행한다.
    int y = 0;
    while (y < 10) //2조건만 참이면 계속 돌음,
    {
        std::cout << "Hello World!\n";
        y++;
    }
    

    //for 문 while문 잘 상황봐가면 쓰기.

    //3최초 한번은 실행후 조건판단을 진행하여
    //3반복문 실행한다.
    y = 2;
    do
    {
        std::cout << "hello world\n";
    } while (true);
        //3while 가 다른점 조건이 거짓이여도 do안에 최소 1번
        //3문이 돌아감.

    

    //5가장 기본적인 for 문 int 변수가 for문 안에서 만들어졌고
    for (int i = 0; i < 10; i++)
    {

    }



    return 0;
}


