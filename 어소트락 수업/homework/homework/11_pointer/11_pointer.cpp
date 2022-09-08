#include <iostream>

void print(int* arr)
{
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << arr[i];
    }
}


int main()
{


    int a = 0;

    void* p = &a; //주소 가져올떄 &

    char ch = 'A';

    void* pCh = &ch;
    
    int arr[10] = { 1,2,3,4,5,56,7,7,9 };
    print(/*&arr[0]*/ arr);



    return 0;
}

