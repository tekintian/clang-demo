#include <stdio.h>

int main (int argc, char *argv[]) {
    FILE *fp = NULL;
    fp=fopen("test.txt","w+");
    fprintf(fp,"file print\n");
    fputs("file puts test for c language",fp);
    fclose(fp);

   return 0;
}