#include <stdio.h>
#include <time.h>

// 传递指针给函数演示
void getSeconds(unsigned long *par); // 声明函数

int main (int argc, char *argv[]) {
    unsigned long sec;
    getSeconds(&sec);
    // %lu 32位无符号整数
    printf("Number of seconds: %lu \n", sec);

   return 0;
}

void getSeconds(unsigned long *par)
{
    // 获取当前秒数 并赋值到指针
    *par = time(NULL);
}