#include <stdio.h>

int main (int argc, char *argv[]) {
#define X 3
#define Y X*2
#undef X
#define X 2
int z=Y;
printf("Z=%d",z);
   return 0;
}