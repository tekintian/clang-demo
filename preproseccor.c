#include <stdio.h>
#define MAX_ARRAY_LENGTH 20

// 宏定义 \ 宏延续符,  字符串常量化运算符 #
#define message_for(a, b) \
    printf(#a " and " #b ": we love you!\n")

int main (int argc, char *argv[]) {
   
   #undef MAX_ARRAY_LENGTH
   #define MAX_ARRAY_LENGTH 50

   printf("%d",MAX_ARRAY_LENGTH);


    #ifdef MAX_ARRAY_LENGTH
        #define MAX_ARRAY 99
    #endif

    printf("max array %d \n", MAX_ARRAY);

    printf("Now date: %s \n", __DATE__);
    printf("Now TIME: %s \n", __TIME__);
    printf("Now LINE: %d \n", __LINE__);
    printf("Now STDC: %d \n", __STDC__);

    // 预处理器运算符
    message_for(Tekin, 云南昆明 China);

   return 0;
}