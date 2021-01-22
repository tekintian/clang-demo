#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subtitle[500];
    int book_id;
};

//什么函数
void printBook(struct Books book);
// entry func
int main (int argc, char *argv[]) {
    struct Books book1;
    struct Books book2;

    strcpy(book1.title,"C programming");
    strcpy(book1.author,"Tekin");
    strcpy(book1.subtitle,"C programming is the source of any high program");
    book1.book_id = 12345;
    
    strcpy(book2.title,"java programming");
    strcpy(book2.author,"java");
    strcpy(book2.subtitle,"java programming is the independent programming");
    book2.book_id = 67890;

    printBook(book1);
    printBook(book2);

   return 0;
}

void printBook(struct Books book){
    printf("title=%s\n",book.title);
    printf("author=%s\n",book.author);
    printf("subtitle=%s\n",book.subtitle);
    printf("book_id=%d\n",book.book_id);
}