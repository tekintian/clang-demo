#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int * getRand()
{
    static int arr[10];
    srand((unsigned)time(NULL));// 设置种子
    for (int i = 0; i < sizeof(arr); i++)
    {
        arr[i] = rand();
        printf(" %d \n", arr[i]);
    }
    return arr;
}
// 主函数
int main(int argc, char const *argv[])
{
    int *p; //定义一个指针
    p = getRand();
    for (int i = 0; i < sizeof(p); i++)
    {
      printf("*(p+[%d]): %d \n", i, *(p+i));  
    }
    return 0;
}
