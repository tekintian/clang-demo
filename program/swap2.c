#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a=10,b=20;
    printf("Before swap a=%d b=%d", a, b);
    a=a*b;
    b=a/b;
    a=a/b;
    system("cls");
    printf("\nAfter swap a=%d b=%d", a, b);
    return 0;
}
