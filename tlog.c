#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void tlog(char *sInfo,...);

int main (int argc, char *argv[]) {
   char str[4+1]={0};
   strcpy(str,"INFO");
   tlog(str,argv[1],argv[2],argv[3]);

   return 0;
}

void tlog(char *sInfo,...){
    char *str =NULL;
    char *str1 =NULL;
    char *str2 =NULL;
    va_list sArgv;
    va_start(sArgv,sInfo);

    str = va_arg(sArgv,char*);
    str1 = va_arg(sArgv,char*);
    str2 = va_arg(sArgv,char*);
    va_end(sArgv);

    printf("运行输出: %s\n  %s\n %s\n %s\n",sInfo,str, str1,str2);
}