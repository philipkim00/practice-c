//1구조체
#include <iostream>


//1지금까지 변수 만들떄 정해진 변수만 사용 구조체는 
//1 사용자 정의 자료형
//1 클래스 (나중에)

struct Pos //2
{
    int y;
    int x;
};

struct Player  //1 //변수 배열 구조체에 다들어갈수있다. .
{
    //char Class[256]; 
    int hp;
    int mp;
    Pos pos; //2 구조체도 구조체 안에 들어갈수 있다.
};



int main()
{
    //1플레이어 10명이 있을떄 10명을 배열할떄 10명다 번호 지정 해서 하면 불편해서 구조체나옴.
    int playerHparr[10]; //1
    int playerMparr[10]; //1 
    int playerAttarr[10]; //1
   //2 Player players[10];

    // 3 Player warrior; // 구조체안에 워리어 할당(지역변수) hp, mp ,pos 만들어짐 pos는 y,x로 또만들어짐
    int arr[256] = {}; // 초기화 
    Player warrior = {}; // 초기화 //4 Player warrior; 이렇게 구조체 만들면 쓰레기값 들어있어서 ={}; 해서 초기화해야함.
    warrior.hp = 100; //3
    warrior.mp = 100; //3

    warrior.pos.y = 5; //3
    warrior.pos.x = 5; //3 구조체안에 접근할떄 . 사용 그리고 또 구조체안에 구조체 사용할려면 .한개더 사용

    std::cout << "플레이어의 y좌표는 : " << warrior.pos.y << "\n"; //3





    return 0;
}
