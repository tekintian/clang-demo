#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char name[100];
    char *description;

    strcpy(name,"Kunming");

    description = (char *)malloc(30*sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr,"error -- unable to allocate required memory!");
    }
    else
    {
        strcpy(description,"Zara ali a DPS student.");
    }

    // 重新分配内存
    description = (char*) realloc(description,200*sizeof(char));
    if (description ==NULL)
    {
        fprintf(stderr," Error to allocate required memory!");
    }
    else
    {
        strcat(description," She is in cluss 10th");
    }

    printf("Name = %s \n",name);
    printf("description=%s\n",description);

    //释放内存, 因为 malloc分配的内存在程序执行完成后不会被初始化
    free(description);

   return 0;
}