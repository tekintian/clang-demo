#include <stdio.h>

int main (int argc, char *argv[]) {
    FILE *fp;
    int c;
    // 定义字符串数组
    char file_name_char[]="../assets/feof.txt";

    // 定义数组file_name_char 指针 file_name
    char *file_name = file_name_char;

    fp = fopen(file_name,"r");
    if (fp==NULL)
    {
        // perror将自定义的错误消息输出到stderr
        perror("打开文件错误");
        return -1;
    }
    while (1)
    {
        // fgetc一个字节一个字节的读取
        c=fgetc(fp);
        // 如果文件读取完毕则中断循环
        if (feof(fp))
        {
            break;
        }
        //输出到控制台
        printf("%c",c);
        
    }
    fclose(fp);

   return 0;
}