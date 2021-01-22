#include <stdio.h>

int main (int argc, char *argv[]) {
    if (argc == 2)
    {
        printf("The argument supplied is%s \n",argv[1]);
    }
    else if (argc ==1)
    {
        printf("Only one arg  %s\n",argv[0]);
    }
    else if (argc >2)
    {
        printf("too many argument supplied!");
    }
    else
    {
        printf("One argument expected");
    }
    
    
   return 0;
}