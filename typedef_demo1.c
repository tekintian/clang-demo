#include <stdio.h>
#include <string.h>
#define  STR "This is define string"  
/**
 * @brief typedef vs #define
#define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：
typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
 * 
 */
// 为结构体Books 定义别名 Book
typedef struct Books
{
    char title[50];
    char author[50];
    char subtitle[200];
    int bookid;
} Book;

int main (int argc, char *argv[]) {

    Book book;
    strcpy(book.title,"C语言学习");
    strcpy(book.author,"tekin");
    strcpy(book.subtitle,"比较好的C语言学习教材");
    book.bookid = 9999;

    printf("book.title=%s\n",book.title);
    printf("book.author=%s\n",book.author);
    printf("book.subtitle=%s\n",book.subtitle);
    printf("book.bookid=%d\n",book.bookid);

    printf("define STR=%s\n", STR);
   return 0;
}