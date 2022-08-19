#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // numbers 배열 정의 및 값 입력
   
    /*int numbers[6];
    numbers[0] = 4;
    numbers[1] = 8;
    numbers[2] = 15;
    numbers[3] = 16;
    numbers[4] = 23;
    numbers[5] = 42; */

    // 위에거 간략화.
    int numbers[6] = { 4, 8, 15, 16, 23, 42 };

    // 값 50 검색
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

/*
이 코드를 작동하면 not found가 나온다. 50이 배열속에 없기 떄문에.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = { "EMMA", "RODRIGO", "BRIAN", "DAVID" };

    for (int i = 0; i < 4; i++)
    {
        // if (names[i] == "EMMA")
        if (strcmp(names[i], "EMMA") == 0) 
        {
            // printf("Found\n);
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

/*
 if (names[i] == "EMMA")
    {
    printf("Found\n);
    }
작동을 제대로 못하는 이유.
자료형이 달라서, 관계연산자 == 는 문자열에 사용할수 없다.
문자열 자체가 배열로 여러 개의 문자로 구성됨 두 문자열을 비교하고 싶다면 문자열 속에 문자를 하나씩을 비교해야함.
전체를 한번에 비교할수 없다. 

문자열 비교하는 함수 strcmp을 이용해 비교가능. 이함수는 두문자열이 같다면 0을 반환.
그리고 strcmp함수는 string.h에 있어서 위에 적어줘야함.

그리고 결과가 성공적이였다는걸 알려주기 위해 일반적으로 0을 반환 그래서 return 0; 을 적어줌.
그리고 return 1은 관습적으로 실패를 의미.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = { "EMMA", "RODRIGO", "BRIAN", "DAVID" };
    string numbers[4] = { "617–555–0100", "617–555–0101", "617–555–0102", "617–555–0103" };

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

/*
전화번호 저장할떄는 문자열로 저장하는게 좋다. 
이유 : 전화번호에는 -나 괄호도있고 + 기호도 있고 이는 문자다. 
       프로그래머로서는 숫자가 아니라 숫자처럼 보이는 문자열

이코드의 문제점은 names 인덱스하고 numbers인덱스가 이름을 올바른 순서로 나열하고 번호도 맞는 순서대로 나열했다고 가정함.

*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

//새로운 타입을 정의한다는 말.
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "EMMA"; //명시적으로 name이라고 표시.
    people[0].number = "617–555–0100"; //명시적으로 number 표시.

    people[1].name = "RODRIGO";
    people[1].number = "617–555–0101";

    people[2].name = "BRIAN";
    people[2].number = "617–555–0102";

    people[3].name = "DAVID";
    people[3].number = "617–555–0103";

    // EMMA 검색
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].name, "EMMA") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

/*
구조체 (struct)
그릇처럼 여러 가지 자료형을 담을 수 있다. 
struct는 여러가지 자료형을 위한 그릇이다.

typedef struct
{
    string name;
    string number;
}
person;
이 문법을 사용해 clang에게 int ,float ,char, bool ,string 뿐 아니라 person이라는 자료형 잇다고 알려준격.
그 안에 묶어둔것은 이름과 번호 두 가지 정보이다.

웹이나 모바일 또는 게임 프로그램을 작성하게 된다면 이렇게 캡슐화를 하여 많은 관련 정보를 한번에 관리할일이 많을것.
특히 데이터베이스를 사용한다면.!

*/