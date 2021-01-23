#include <stdio.h>
#include <stddef.h>
/**
 * @brief stddef.h 库 offsetof 宏使用演示
 * 
 * offsetof(type, member-designator) 会生成一个类型为 size_t 的整型常量，
 * 它是一个结构成员相对于结构开头的字节偏移量。
 * 成员是由成员指示器(member-designator)给定的，结构的名称是在 type 中给定的。
 * 声明
下面是 offsetof() 宏的声明。

offsetof(type, member-designator)
参数
type -- 这是一个 class 类型，其中，member-designator 是一个有效的成员指示器。
member-designator -- 这是一个 class 类型的成员指示器。
返回值
该宏返回类型为 size_t 的值，表示 type 中成员的偏移量。
 */

/** @brief 结构体定义 */
struct address
{
    char name[30];
    char street[100];
    int mobile;
};

int main (int argc, char *argv[]) {

    printf("address结构中的name偏移量 %lu 个字节\n", offsetof(struct address,name));

     printf("address结构中的street偏移量 %lu 个字节\n",offsetof(struct address, street));

     printf("address结构中的mobile偏移量 %lu 个字节\n",offsetof(struct address, mobile));

   return 0;
}