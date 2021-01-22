#include <stdio.h>

#if !defined(MESSAGE)
    #define MESSAGE "My Mesage!!!"
#endif
// 参数化的宏
#define square(x) ( (x)*(x) )

#define MAX(x,y) ((x)>(y)? (x):(y) )

int main (int argc, char *argv[]) {
   printf("Here is the message: %s \n",MESSAGE);
   // 使用参数化的宏
   printf(" 8 square: %d \n",square(8));

   printf("最大数: %d \n",MAX(99,12));

   return 0;
}