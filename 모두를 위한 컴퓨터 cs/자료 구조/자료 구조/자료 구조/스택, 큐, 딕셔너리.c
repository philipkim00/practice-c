/*
우리가 여태껏 배운 배열, 연결 리스트, 해시 테이블, 트라이 외에도 많은 자료 구조들이 있습니다.

또는 위의 자료 구조를 기반으로 해서 문제를 해결하는데 적합한 새로운 자료 구조를 만들 수도 있습니다.

아래와 같이 세 가지의 대표적인 자료 구조를 간단하게 알아보겠습니다.


큐(queuse)

정의: 큐는 사람들이 앞으로 줄을 선 것.

큐는 메모리 구조에서 살펴봤듯이 값이 아래로 쌓이는 구조입니다.

값을 넣고 뺄 때 ‘선입 선출’ 또는 ‘FIFO’라는 방식을 따르게 됩니다. 가장 먼저 들어온 값이 가장 먼저 나가는 것이죠.

은행에서 줄을 설 때 가장 먼저 줄을 선 사람이 가장 먼저 업무를 처리하게 되는 것과 동일합니다.

배열이나 연결 리스트를 통해 구현 가능합니다.

실생활에서는 사용하지않짐나 큐에는 두 가지 기본 연산있슴.
1.enqueue
줄에 들어가서 서는 것

2. dequeue
줄을 빠져나오는 것



스택(stacks)

반면 스택은 역시 메모리 구조에서 살펴봤듯이 값이 위로 쌓이는 구조입니다.

따라서 값을 넣고 뺄 때 ‘후입 선출’ 또는 ‘LIFO’라는 방식을 따르게 됩니다. 가장 나중에 들어온 값이 가장 먼저 나가는 것이죠.

뷔페에서 접시를 쌓아 뒀을 때 사람들이 가장 위에 있는(즉, 가장 나중에 쌓인) 접시를 가장 먼저 들고 가는 것과 동일합니다.

역시 배열이나 연결 리스트를 통해 구현 가능합니다.

스택에 두가지 기본 연산
1. push
스택에 어떤 요소를 밀어 넣는다는 뜻

2. pop
가장 위의 요소를 뺸다는 의미



딕셔너리(dictionaries)

딕셔너리는 ‘키’와 ‘값’이라는 요소로 이루어져 있습니다.

‘키’에 해당하는 ‘값’을 저장하고 읽어오는 것이죠. 마치 대학교에서 ‘학번’에 따라서 ‘학생’이 결정되는 것과 동일합니다.

일반적인 의미에서 ‘해시 테이블’과 동일한 개념이라고도 볼 수 있습니다.

역시 ‘키’를 어떻게 정의할 것인지가 중요합니다.


*/