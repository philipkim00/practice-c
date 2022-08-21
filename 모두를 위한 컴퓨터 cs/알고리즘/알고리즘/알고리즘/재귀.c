/*
재귀(recursion)

함수를 사용할 때 어디에서 호출했나요? main 안에서 프로그램을 작성하면서 필요한 순간에 호출하여 사용합니다.

그런데 main 역시 함수라는걸 기억하시나요? main이라는 함수 안에서 또 다른 함수를 사용한 것입니다.

이 사실을 알게 되었을 때, 우리는 함수가 본인 스스로를 호출해서 사용할 수 있는지에 대해 의문을 가질 수 있습니다.

이에 대한 대답은 할 수 있다 이며, 이러한 것을 재귀(Recursion)라고 부릅니다.

*/
#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    // 사용자로부터 피라미드의 높이를 입력 받아 저장
    int height = get_int("Height: ");

    // 피라미드 그리기
    draw(height);
}

void draw(int h)
{
    // 높이가 h인 피라미드 그리기
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/*높이를 입력 받아 중첩 루프를 통해 피라미드를 출력해주는 draw 함수를 정의한 것이죠.

여기서 꼭 중첩 루프를 써야만 할까요 ? 사실 바깥 쪽 루프는 안 쪽 루프에서 수행하는 내용을 반복하도록 하는 것일 뿐입니다.

따라서 바깥 쪽 루프를 없앤 draw함수를 만들고, 이를 ‘재귀적으로’ 호출하도록 해서 똑같은 작업을 수행할 수 있습니다.

즉, draw 함수 안에서 draw 함수를 호출 하는 것이죠.아래 코드와 같이 수정할 수 있습니다. */

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int h)
{
    // 높이가 0이라면 (그릴 필요가 없다면) 아무것도 하지않는다.
    if (h == 0)
    {
        return;
    }

    // 높이가 h-1인 피라미드 그리기
    draw(h - 1);

    // 피라미드에서 폭이 h인 한 층 그리기
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}

/*draw 함수 안에서 draw 함수를 다시 호출 하는 부분을 유의하시기 바랍니다.

h라는 높이를 받았을 때, h - 1 높이로 draw 함수를 먼저 호출하고, 그 후에 h 만큼의 #을 출력합니다.여기서 내부적으로 호출된 draw 함수를 따라가다 보면 h = 0인 상황이 오게 됩니다.

따라서 그 때는 아무것도 출력을 하지 않도록 하는 조건문을 추가해줘야 합니다.



이렇게 재귀를 사용하면 중첩 루프를 사용하지 않고도 하나의 함수로 동일한 작업을 수행할 수 있습니다 */