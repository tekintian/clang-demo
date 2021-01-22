#include <stdio.h>

/** 阶乘函数 */
double factorial(unsigned int i)
{
    if (i<=1)
    {
        return 1;
    }
    return i* factorial(i-1);
}

int main (int argc, char *argv[]) {
   unsigned int i;
   printf("请输入你要计算阶乘的数字:\n");
   scanf("%u",&i);
   printf("%u的阶乘为:%f\n", i, factorial(i));
   return 0;
}