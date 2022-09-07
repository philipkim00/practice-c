#include <iostream>
using namespace std; //1std: 생략가능. 스텐다드
//1함수 : 코드의 묶음

//3간단하게 설명하면 이름 바꾸기
//3자료형 재정의
typedef unsigned int SIZE; //size_t클릭하고 f12눌르면 설명나옴.

//1이름공간을 나눠서쓰자.(협업 할떄 사용)
namespace yam
{
    int pos;
}
namespace tam
{
    int pos;
}

//2반환값 함수 이름(전달인자) 반환값 사용안할떄 void
void PrintNumber()
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << i;
    }
    // 3SIZE 잘못 사용하면 인트 최대값 나올수도.

  
}
//배열공부후 다시 넘어옴 4
//  4함수 오버로딩
// 4같은 이름의 함수도 전달인자의 종류에 
// 4선언할수 있도록 가능하게 해주는 기능(이름이 같아도 다른 함수 취급한다.)
void PrintNumber(int num/*, int num2, int num3*/) //4int num은 지역변수
{
    for (SIZE i = 0; i < 10; i++) 
    {
        cout << num + i;
    }
    return;
}
// 6얕은 복사 call by value
// 6깊은 복사 call by reference ??? 포인터 변수 할떄 설명해주신다함.
int add(int a, int b)
{   //7 4바이트 더사용함. 그렇지만 디버깅할떄 result값을 확인해야할떄 이점이 있슘. 
    int result = a + b;
    a = 200; //6 메인함수 a값이 200으로 복사되어서 메인함수로 넘어가지않떄문에 얕은 복사.
    return result;

    // 7지역변수는 해당 지역을 빠져나오면서
    // 7메모리에서 해체된다.
}
//7int add(int a, int b)
//7{
//7    return a + b;
//7}

//for (size_t i = 0; i < length; i++) //3for 눌르고 탭눌르면 자동으로생김 size_t눌르고 f12눌르면 선언이 되있는 곳으로 진입.
//{
//
//}


//2 f11 함수 안으로 진입하는 디버깅 단축키
int main()
{
    //1for (size_t i = 0; i < 10; i++)
    //1{
    //1    cout << i;
    //1}

    
    //2for (size_t i = 0; i < 10; i++)
    //2{
    //2    cout << i;
    //2}

    //2for (size_t i = 0; i < 10; i++)
    //2{
    //2    cout << i;
    //2}
    //2 PrintNumber();
    PrintNumber(10/*. 20, 30*/); //4 괄호안에 값이 전달 인수에 그대로 간다.
    //2PrintNumber();
    //2PrintNumber();
    //2 세번 출력하면 출력 출력 출력 소스코드를 반복적으로 사용할수 있다.(함수 사용하는 이유1) 

    //1tam::pos = 100;
    //1yam::pos = 100;
    int a = 22; //6
    int b = 11; //6

   // add(10, 5); //5 1. 메인에서 add함수 호출 add함수로 넘어가서 
                //5 2. 그리고 나서 리턴 result값을 받아서 메인함수를 가고 실행분기 넘김
                //5 그래서 add(10,5)는 15로 바뀜.
    int res = add(10, 5); //5 이렇게 받아서 사용해야한다. 15가 res에 들어간다.
    res = add(a, b); //6
    //6 변수 이름이 똑같은 것이 아님 가장 좋은것은 변수명을 다르게.
    //6 Add함수의 a,b 하고 메인함수의 a,b는 다른변수.
    return 0;
}

