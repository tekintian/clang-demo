#include <stdio.h>
#include <string.h>
int main(){
    char src[50];
    char dest[100];

    memset(dest, '\0',sizeof(dest));
    strcpy(src,"This is c language!");
    strcpy(dest,src);

    printf("最终目标字符: %s\n",dest);
    return 0;
}