#include <stdio.h>
#include <stdlib.h>

//���� ����Ʈ�� �⺻ ������ �Ǵ� node ����ü�� �����մϴ�.
typedef struct node
{
    //node �ȿ��� ������ ���� ����Ǵ� ������ number���� �����մϴ�.
    int number;

    //���� node�� �ּҸ� ����Ű�� �����͸�  *next�� �����մϴ�.
    struct node* next;
}
node;

int main_e(void)
{
    // list��� �̸��� node �����͸� �����մϴ�. ���� ����Ʈ�� ���� ù ��° node�� ����ų ���Դϴ�. 
    // �� �����ʹ� ���� �ƹ� �͵� ����Ű�� ���� �ʱ� ������ NULL �� �ʱ�ȭ�մϴ�.
    node* list = NULL;

    // ���ο� node�� ���� �޸𸮸� �Ҵ��ϰ� ������ *n���� ����ŵ�ϴ�.
    node* n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    // n�� number �ʵ忡 1�� ���� �����մϴ�. ��n->number���� ��(*n).numer���� ������ �ǹ��Դϴ�. 
    // ��, n�� ����Ű�� node�� number �ʵ带 �ǹ��ϴ� ���Դϴ�. 
    // �����ϰ� ȭ��ǥ ǥ�� ��->���� �� �� �ֽ��ϴ�. n�� number�� ���� 1�� �����մϴ�.
    n->number = 1;

    // n ������ ���ǵ� node�� �����Ƿ� NULL�� �ʱ�ȭ�մϴ�.
    n->next = NULL;

    // ���� ù��° node�� �����߱� ������ list �����͸� n �����ͷ� �ٲ� �ݴϴ�.
    list = n;

    // ���� list�� �ٸ� node�� �� �����ϱ� ���� n�� ���ο� �޸𸮸� �ٽ� �Ҵ��մϴ�.
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    // n�� number�� next�� ���� ���� �����մϴ�.
    n->number = 2;
    n->next = NULL;

    // list�� ����Ű�� ���� ù ��° node�Դϴ�. 
    //�� node�� ���� node�� n �����ͷ� �����մϴ�.
    list->next = n;

    // �ٽ� �� �� n �����Ϳ� ���ο� �޸𸮸� �Ҵ��ϰ� number�� next�� ���� �����մϴ�.
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 3;
    n->next = NULL;

    // ���� list�� ù��° node�� ����Ű��, �̴� �ι�° node�� ����Ǿ� �ֽ��ϴ�. 
    // ���� �� ��° node�� �� �����ϱ� ���� ù ��° node (list)�� 
    // ���� node(list->next)�� ���� node(list->next->next)�� n �����ͷ� �����մϴ�.
    list->next->next = n;

    // ���� list�� ����� node�� ó������ �湮�ϸ鼭 �� number ���� ����մϴ�. 
    // ������ node�� next���� NULL�� ����Ǿ� ���� ���̱� ������ �� ���� for ������ ���� ������ �˴ϴ�.
    for (node* tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    // �޸𸮸� �������ֱ� ���� list�� ����� node���� ó������ �湮�ϸ鼭 free ���ݴϴ�.
    while (list != NULL)
    {
        node* tmp = list->next;
        free(list);
        list = tmp;
    }
}

//���� ����Ʈ�� �߰��� node�� �߰��ϰų� �����ϴ� �ڵ�� ��� �ۼ��� �� ������� ?

/*->
�߰� : ���� ��尡 ����Ű�� ��忡 �Ȱ��� ȭ��ǥ�� ������ְ� ���� ��尡 ����Ű�� ȭ��ǥ�� �߰� ���� �ű�

���� : ���� ��尡 ����Ű�� ��带 �����Ϸ��� ��尡 �ƴ� ���� ���� �Ű��ְ� �����Ϸ��� ��带 free�� ���� ���� */