

/*
검색 알고리즘.

지금까지는 컴퓨터 내부를 다름(메모리, 램(바이트단위))

배열은 실생활로 치면 빨간 서럽과 같다.(전반적으로 파악할수 있지만)

7개의 서랍 -> ㅁ -> bool(참거짓)

7개의 서랍중에 하나에 숫자 50을 어딘가에 넣고 본인이 컴퓨터라 생가갛고 50을 찾아라.

선형검색으로 찾는법.?
왼쪽에서 오른쪽까지 선형검색으로 찾음.(정확하다.)
정렬되어 있는지 알지 못하는 상황에서 우리가 할수 있는 최선은 직접 하나하나 확인해보는 방법뿐이다.
차례대로 보며 숫자를 찾는법.

이진 탐색 알고리즘
숫자를 미리 정렬하고 찾는법.
이진은 두개를 뜻하고 분할 정복기법을 사용(이것도 이진기법)

선형탐색에 대한 의사 코드
for i from 0 to n-1
	if i'th element is 50
Return true
Return false
이 알고리즘이 반환하는 불리언 값이다.
이 과정을 계속 반복.
이 루프가 끝나는 나머지 상황을 처리하기 위해 거짓을 반환해야한다.

이진 탐색의 의사 코드
If no items

    Return false

If middle item is 50
    Return true
Else if 50 < middle item
    Search left half
Else if 50 > middle item
    Search right half

우선 가운데를 확인하고 
만약 숫자가 50이면 참을 반환
중간 숫자가 50보다 작으면 왼쪽을 탐색
중간 숫자가 50보다 크면 오른쪽을 탐색.
그렇지만 중간에도 없고 왼쪽에도 없고 오른쪽에도 없다면 거지승ㄹ 반환해야함.


*/
