#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 输出当前文件执行代码，__FILE__ 为当前执行的文件常量。
 * 
 */
void out_file_src(){
    FILE *fp;
    char c;
    fp = fopen(__FILE__,"r");
    do{
        c = getc(fp); //获取一个字节
        putchar(c); //输出一个字节
    }while(c!=EOF);
    fclose(fp);
}

int main (int argc, char *argv[]) {
    out_file_src();
   return 0;
}