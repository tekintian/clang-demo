#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
   char str[1000];
   FILE *fpstr;
   fpstr = fopen("file_write.txt","w");
   if (fpstr==NULL)
   {
       printf("Error!");
       exit(EXIT_FAILURE);
   }
   printf("请输入字符串:\n");
   fgets(str, (sizeof str / sizeof str[0]),stdin);

   fprintf(fpstr,"%s",str); // 将fgets获取到的字符写入到文件
   fclose(fpstr);
   
   return 0;
}