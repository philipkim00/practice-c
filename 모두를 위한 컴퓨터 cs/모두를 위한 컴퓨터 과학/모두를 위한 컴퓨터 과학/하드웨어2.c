#include  <stdio.h>

int main(void)
{
	for (int i = 1; ; i *= 2)
	{
		printf("%i\n", i); //컴퓨터의 32비트를 사용하면 2를 계속 곱하면 0이 된다??? 
		                   // 계속햇 숫자를 키워나가면 언젠가는 앞자리에 1을 더할 비트조차 없어진다.
		                   // 더 큰값은 저장할수 없다.
						   // 0이 나오는 이유 , 2진법으로 111은 = 7 인데 1을 더하면 
		                   // 1000 즉 8이 나온다  하지만 숫자 혹은 비트가 3개뿐이라면 소위 말하는 오버플로우가 생김
		                   //앞으로 가져온 1이 사라지면서 실제로 저장된 값은 0이된다.
	}
}

