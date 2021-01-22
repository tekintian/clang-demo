#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fun(char *p){
    p = (char*) malloc(strlen("hello")+1);
    strcpy(p,"hello");
    *(p+0) = '1';
    printf("fun = %s\n",p);
}
int main (int argc, char *argv[]) {
    char *p=NULL;
    fun(p);
    
    printf("p=%s\n",p);
   return 0;
}