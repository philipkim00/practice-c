
/*
배열의 크기 조정하기

배열은 생각이상으로 강력하지않다.
ex) 크기가 3인 배열을 가지고 세개의 값을 저장햇는데
    네 번쨰 값도 저장하려는 상황이면?
    우리는 아마도 새로운 메모리 박스를 하나 더 가져와서
    3옆에 두고 모든 숫자들을 한 번에 저장하면 된다고 생각한다.
    그렇지만 이건 좋은 생각이 아님
    이유는 컴퓨터의 나머지 메모리의 관점에서는
    크기가 3인 배열에 넣어진 바이트들은 이미 다른 바이트로 둘러싸여 있기떄문.

위의 내용 요약.
단순하게 현재 배열이 저장되어 있는 메모리 위치의 바로 옆에 일정 크기의 메모리를 더 덧붙이면 되겠지만,
실제로는 다른 데이터가 저장되어 있을 확률이 높습니다.

    그래서 해결법은

따라서 안전하게 새로운 공간에 큰 크기의 메모리를 다시 할당하고 기존 배열의 값들을 하나씩 옮겨줘야 합니다.

그리고 이렇게 하면 이전에 사용된 메모리를 버리거나 free를 실행하면 됨.

따라서 이런 작업은 O(n), 즉 배열의 크기 n만큼의 실행 시간이 소요될 것입니다.

왜 O(n)인가
처음에 사물함(메모리공간)이 많아지는 만큼 이를 옮겨 넣기 위한 추가 과정이 필요하기 떄문이다.

즉 선형관계 만큼의 시간이 듬. 탐색 할 때는 아주 강력하지만 
숫자가 정렬되어 있을 때 탐색을 하면 실행 시간은? 
log n 이다.

이 과정을 아래 코드와 같이 나타낼 수 있습니다.

*/

/*#include <stdio.h>

int main(void)
{
    //list 라는 정수형 배열을 만들고 크기를 3으로 함.
    int list[3];

    //list 초기화를 위해 하드코딩함. 배열을 세 가지 값으로 수동으로 초기화함.!
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    
    for (int i = 0; i < 3; i++)
    {
        // 인덱스를 이용해 프린트함.
        print("%i\n", list[i]);
    }
} */

/*
이 코드는 근본적 문제 있슴.

직접 이 배열의 크기를 타이핑해서 하드코딩을 했기 떄문에 네 번쨰 숫자를 어떻게 넣을 수 있을까?
다 일일이 하드코딩해서 바꿔야한다 존나 귀찮게 

그렇지만 메모리 동적으로 배정하는 malloc함수 배움.
*/


/*#include <stdio.h>
#include <stdlib.h>

int main_c(void)
{
    //int 자료형 3개로 이루어진 list 라는 포인터를 선언하고 메모리 할당
    // list는 x나 y같은 변수이고 메모리 덩어리에 해당하는 주소를 담고 있다.
    int* list = malloc(3 * sizeof(int));

    // 포인터가 잘 선언되었는지 확인
    if (list == NULL)
    {
        return 1;
    }

    // list 배열의 각 인덱스에 값 저장
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //int 자료형 4개 크기의 tmp 라는 포인터를 선언하고 메모리 할당
    int* tmp = malloc(4 * sizeof(int));

    if (tmp == NULL)
    {
        return 1;
    }

    // list의 값을 tmp로 복사
    // 오래된 배열(list)에서 새로운 배열로 정수를 복사하는 코드임
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // tmp배열의 네 번째 값도 저장
    tmp[3] = 4;

    // list의 메모리를 초기화
    free(list);

    // list가 tmp와 같은 곳을 가리키도록 지정
    list = tmp;

    // 새로운 배열 list의 값 확인
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // list의 메모리 초기화
    free(list);
} 
*/


/*
    대괄호에 0을 적으면 0번 바이트가 나옴
    하지만 대괄호에 1을 넣으면 두 번쨰 바이트가 나오지 않고 4바이트 뒤가 된다
    대괄호에 2를 넣으면 세 번쨰 바이트가 나오지않고 8바이트 뒤가 된다.
     4+4+4, 즉 12바이트를 할당받기 떄문.
     그리고 이 대괄호는 정확한 메모리 덩어리로 가서 정수 3개를 알맞게 넣을수 있도록 해줌.
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    안정성 점검을 위해 이 코드씀 
    malloc는 가끔 메모리를 다쓸수 있슴 오버플로우를 할수있슴 그래서 
    메모리가 부족할수도 있기떄문에 이걸 해결하는 가장 좋은방법은
    메모리를 할당  할 떄마다. 널이 반환 되는지 확인해 보는것.

    if (tmp == NULL)
    {
        return 1;
    }

    암시적으로 선언했다는 에러는 보통 헤더파일을 추가해서 해결한다.
    #include <stdlib.h> 함수에는
    malloc함수하고 free함수가 있다.

*/



//위와 동일한 작업을 realloc 이라는 함수를 이용해서 수행할 수도 있습니다.

#include <stdio.h>
#include <stdlib.h>

int main_d(void)
{
    int* list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // tmp 포인터에 메모리를 할당하고 list의 값 복사
    int* tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    // list가 tmp와 같은 곳을 가리키도록 지정
    list = tmp;

    // 새로운 list의 네 번째 값 저장
    list[3] = 4;

    // list의 값 확인
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    //list 의 메모리 초기화
    free(list);
}

/*
realloc은 stdlib.h에 들어 있는 또 다른 함수 realloc은 이미 할당받은 기존 메모리 덩어리를 
새롭게 가져오고 원래보다 크든 작든 새롭게 설정된 크기로 바꾸는 작업을 합니다.

realloc은 기존 배열에서 새로운 배열로 데이터를 복사해주고 
우리는 무언가 잘못되지는 않았는지
여기에서 널인지 체크하고 새로운 값을 저장하기만 하면됨. 

*/