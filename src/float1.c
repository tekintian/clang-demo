#include <stdio.h>
#include <float.h>

int main (int argc, char *argv[]) {
    printf("The maximum value of float is:%.10e\n",FLT_MAX);
    printf("The minimum value of float is:%.10e\n",FLT_MIN);
    printf("The number of digits in the number: %.10e\n",FLT_MANT_DIG);
   return 0;
}