#include <stdio.h>

const int MAX = 3;
 
int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;
 
   /* 指针中第一个元素的地址 */
   ptr = var;
   i = 0;
   while ( ptr <= &var[MAX - 1] )
   {
 
      printf("存储地址：var[%d] = %p\n", i, ptr );
      printf("存储值：var[%d] = %d\n", i, *ptr );
 
      /* 指向上一个位置 */
      ptr++;
      i++;
   }

   // 字符指针数组

   const char *strArr[] ={"云南","昆明","Hello"}; //指针数组
   for (int i = 0; i < strArr; i++)
   {
       printf("\n第%d的值为 %s", i, strArr[i]);
   }
   return 0;
}