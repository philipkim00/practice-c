/*
메모리 구조 

컴퓨터 메모리와 파일 즉 컴퓨터나 휴대폰에 있는 이미지와 같은 파일을 만들거나 수정할 떄 컴퓨터나 휴대폰 속 메모리의 위치를 표현하는데 매우 유용

2진법에서는 8bit를 이용해서 나타는 최대의수 255

10진법은 각 자릿수가 10의 거듭제곱을 의미

16진법은 16의 거듭제곱을 사용  255= FF = 16x15+15 

16진법(hax)
0,1/(2진수),2,3,4,5,6,7,8,9/(10진수),A,B,C,D,E,F/(16진수) 

16진법에서는 9를 0 9이고 15는 0F 16은 1 0('십'이라고 읽으면 안되고 '일 영' 이라고 읽어야됨)  

RGB 
00(빨) 00(초) 00(파) 인데 이건 검은색
FF(빨) 00(초) 00(파) 
이건 255 만큼의 빨간색이 있고 초록색과 파란색은 여전히 0개 , 컴퓨터 화면에 빨간색 픽셀이 보인다면 그 픽셀은 FF0000이라는 값을 가짐.
    
16진수 사용할떄 모든 수앞에 0X를 붙이기로 약속함. 수학적 의미는 없지만 앞으로 나오는 값이 16진수 라고 알려줌.

*/

#include <stdio.h>

int main_a(void)
{
    int n = 50;
   // printf("%i\n", n);
   //printf("%p\n", &n);
    printf("%i\n", *&n);
}

/*
&는
"~의 주소"를 의미하는 연산자
주소를 가져오고

저 값은 우리가 컴퓨터에 특정 값의 주소를 요구한 것으로,
이 값을 가리키는 포인터 값을 돌려받은것.
포인터는 컴퓨터 메모리의 주소를 가리키는 것.

* 또는 별표는 
"~의 주소"와 반대의 동작을 한다. 
"그 주소로 가줘"라는 의미
그 주소로 간다.

*/
