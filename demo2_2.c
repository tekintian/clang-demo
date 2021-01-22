
#include <stdio.h>
#include <stdlib.h>

void fun(int **p){
    int *tmp = (int*)malloc(sizeof(int));
    *tmp = 100;
    *p = tmp;
}

int main(int argc, char *argv[])
{
	int *p = NULL;
	fun(&p);//地址传递

	printf("*p = %d\n", *p);

	return 0;
}