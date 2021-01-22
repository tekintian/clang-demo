#include <stdio.h>
/** 标记粘贴运算符 ## */
#define tokenpaster(n) printf("token" #n "=%d", token##n)

int main (int argc, char *argv[]) {
    int token34 = 40;
    tokenpaster(34);
   return 0;
}
/** 运行结果: token34 = 40 */