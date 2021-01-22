#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char name[100];
    char *description;

    strcpy(name,"Tekin");

    //动态分配内存  malloc(int num) 在堆区分配一块指定大小的空间
    description = (char *)malloc(200*sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr,"Error - unable to allocate required memory!");
    }
    else
    {
        strcpy(description,"喜欢学习C语言");
    }
    
    printf("%s %s sizeof(char)=%lu\n", name, description,sizeof(char));

   return 0;
}