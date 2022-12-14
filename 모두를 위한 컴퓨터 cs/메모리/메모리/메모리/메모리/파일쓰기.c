/*
자기 자신을 계속 호출하는 버그가 있는 프로그램을 실행하면 스택 오버플로우 걸림.
시작점 없이 자기 자신을 계속 호출하면 스택 오버플로우 거림.

힙 오버 플로우 
반대로 malloc를 게속 호출해서 너무 많은 메모리를 할당해 메모리 속 다른 내용을 덮어씁니다.
제한된 크기의 메모리에서는 어쩔수 없다.

힙 영역에서는 malloc 에 의해 메모리가 더 할당될수록, 점점 사용하는 메모리의 범위가 아래로 늘어납니다.

마찬가지로 스택 영역에서도 함수가 더 많이 호출 될수록 사용하는 메모리의 범위가 점점 위로 늘어납니다.

이렇게 점점 늘어나다 보면 제한된 메모리 용량 하에서는 기존의 값을 침범하는 상황도 발생할 것입니다.

이를 힙 오버플로우 또는 스택 오버플로우라고 일컫습니다.
*/


//[get_int 코드]

#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x); 
    printf("x: %i\n", x);
}

/*
scanf함수
printf와 비슷
형식 지정자를 쓰면 그 형식대로 입력을 받는다. 
scnaf는 깜빡이는 입력창을 띄워 사용자가 숫자를 입력하고 엔터를 누르면 그 숫자를 저 주소에 저장한다.

scanf("%i", &x);
x의 주소를 scanf에게 주는 이유는 
도우미 함수 or 남이 작성한 코드로 변수의 값을 바꾸고 싶다면 
값으로 전달하면 안된다. 그럼 복사본을 전달하고 결국 사라짐.
그래서 주소를 전달해야함.
*/

//[get_string 코드]

#include <stdio.h>

int main(void)
{
    char s[5]; // 크기 5의 s 문자 배열 선언
    printf("s: "); //s출력
    scanf("%s", s); //형식 지정자를 받아 사용자로부터 무엇을 입력 받을지 파악하고 저장할 주소를 받는다. char *는 주소이기 떄문에 &가 필요 없다. 
                    // 포인터 변수는 그자체가 주소로 정의됨.
    printf("s: %s\n", s); //사용자의 입력을 출력함.
}

/*
저 코드의 문제점 크기 5를 넘으면 프로그램이 분명 멈추거나 세그멘테이션 오류가 발생
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 파일열기
    FILE *file = fopen("phonebook.csv", "a");

    // 사용자에게서 문자열을 입력받는다
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //파일에 출력한다.
    fprintf(file, "%s,%s\n", name, number); 

    // 파일을 닫는다.
    fclose(file);
}

/*
fopen이라는 함수를 이용하면 파일을 FILE이라는 자료형으로 불러올 수 있습니다.

fopen 함수의 첫번째 인자는 파일의 이름, 두번째 인자는 모드로 r은 읽기, w는 쓰기, a는 덧붙이기를 의미합니다.

사용자에게 name과 number라는 문자열을 입력 받고, 이를 fprintf 함수를 이용하여 printf에서처럼 파일에 직접 내용을 출력할 수 있습니다.

작업이 끝난 후에는 fclose함수로 파일에 대한 작업을 종료해줘야 합니다.
*/