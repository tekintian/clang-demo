#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,reverse=0,rem;
    printf("Please input a number\n");
    scanf("%d",&n);

    while(n!=0){
        rem = n%10; // 取模的8
        printf("rem=%d \n",rem);
        reverse=reverse*10+rem;
        printf("reverse=%d \n",reverse);
        n = n/10; // 18/10 = 1.8
        printf("n=%d \n",n);
    }
    printf("Reversed Number: %d \n", reverse);
    return 0;
}
