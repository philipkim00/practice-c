/*
실행시간의 상한

O(n^2): 선택 정렬, 버블 정렬
O(n log n)
O(n): 선형 검색
O(log n): 이진 검색
O(1)

실행시간의 하한

Ω(n^2): 선택 정렬, 버블 정렬
Ω(n log n)
Ω(n)
Ω(log n)
Ω(1): 선형 검색, 이진 검색



버블정렬
인접한 항목들의 위치를 바꾼다. 계속 반복해서 모든게 정렬될 떄까지.
의사 코드를 교환이 없을 떄까지만 반복하도록 바꾸면된다.

여기서 버블 정렬을 좀 더 잘 할 수 있는 방법을 알아보겠습니다.

만약 정렬이 모두 되어 있는 숫자 리스트가 주어진다면 어떨까요?

Repeat n–1 times

    For i from 0 to n–2

        If i'th and i+1'th elements out of order

            Swap them 
           이걸

Repeat until no swaps

    For i from 0 to n–2

        If i'th and i+1'th elements out of order

            Swap them
            이렇게 하면 버블 정렬의 하한은 Ω(n)이게된다.

실행시간의 하한
Ω(n^2): 선택 정렬
Ω(n log n)
Ω(n): 버블 정렬
Ω(log n)
Ω(1): 선형 검색, 이진 검색


버블 정렬은 큰 값이 오른쪽으로 떠오른다면
선택 정렬은 가장 작은 값을 찾아서 제자리에 차례차례둔다.

*/