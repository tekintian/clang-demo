#include <stdio.h>

int max(int x, int y)
{
    return x>y ? x : y;
}

int main(int argc, char const *argv[])
{
    // p是函数指针
    int (*p)(int, int) = &max; // 这里的 & 可以省略
    int a,b,c,d;

    printf("\n请输入3个数字:");
    scanf("%d %d %d",&a,&b,&c);

    // 这里的p等介于 max, 即: d = max(max(a,b),c);
    d = p(p(a,b), c);
    printf("你输入的最大数字为: %d \n",d);

    return 0;
}

