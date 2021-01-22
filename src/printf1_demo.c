#include <stdio.h>
#include <stdlib.h>

void writeFile();
void showFile();

int main (int argc, char *argv[]) {
   writeFile();
   showFile();

   printf("\n");
   return EXIT_SUCCESS;
}
void writeFile()
{
   FILE *fp;
   fp = fopen("printf1.txt","w+");
   fprintf(fp,"%s %s %s %d","we","are","in",2021);
   fclose(fp);
}

void showFile()
{
    FILE *fp;
    int c;

    fp = fopen("printf1.txt","r");
    while (1)
    {
       c = fgetc(fp); // 读取一个字符
       
       // 如果到文件末尾,则退出循环
       if (feof(fp)) 
       {
          break;
       }
       printf("%c",c); // 显示一个字符
    }
    
    fclose(fp);
}