
#include <stdio.h>
#include <stdlib.h>

void fun(int **p)
{
	*p = (int *)malloc(sizeof(int));
	**p = 100;
}


int main(int argc, char *argv[])
{
	int *p = NULL;
	fun(&p);//地址传递

	printf("*p = %d\n", *p);

	return 0;
}