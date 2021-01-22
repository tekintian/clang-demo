#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var=10;
    char str[] = "Hello world!";

    int *p;
    char *cp; // 定义指针变量
    
    p = &var;
    cp = &str[0];

    
   
    
    printf("var的内存地址为 %p 其值为 %d \n",p, *p);
    printf("cp 的指针地址 %p , 其值为 %d  \n",cp, *cp);

    // 定义空指针
    int *ptr = NULL;
    ptr = &var;
    printf(" \n ptr的地址是 %p ",ptr);
    printf(" \n ptr的地址是 %d ", *ptr);
    
    char *cp_var;
    cp_var = str; //变量指针
    // 利用变量指针运算获取数组的值 
    for (int i = 0; i < sizeof(str); i++)
    {
        printf("\n第 %d 的存储地址 %p 的值等于 %d", i, cp_var, *cp_var);
        cp_var++;
    }
    

    return 0;
}
