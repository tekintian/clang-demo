#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10,b=20;
    printf("Before swap a=%d, b=%d", a, b);
    a =a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap a=%d, b=%d aaa", a, b);
    return 0;
}
