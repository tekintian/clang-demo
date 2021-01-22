#include <stdio.h>

int main (int argc, char *argv[]) {
   char str[200];
    int i;

//    printf("please input a value\n");
//    gets(str);
//    printf("your input value is\n");
//    puts(str);

 printf("please input a value\n");
scanf("%s %d",str, &i);

printf("\n You antered : %s  %d", str, i);
printf("\n");
   return 0;
}