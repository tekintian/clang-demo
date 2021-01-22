#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subtitle[500];
    unsigned int book_id;
};

void printBook(struct Books *book)
{
    printf("-------------------------\n\t\r");
    printf("book->title=%s\n",book->title);
    printf("book->author=%s\n",book->author);
    printf("book->subtitle=%s\n",book->subtitle);
    printf("book->book_id=%u\n",book->book_id);
    if (book->book_id!=123)
    {
       printf("-------------------------\n\t\r");
    }
    
}

int main (int argc, char *argv[]) {
    struct Books book1;
    struct Books book2;

    strcpy(book1.title,"C programming");
    strcpy(book1.author,"C");
    strcpy(book1.subtitle,"C programming is the best programming");
    book1.book_id=123;

    strcpy(book2.title,"java programming");
    strcpy(book2.author,"java");
    strcpy(book2.subtitle,"java programming is the best programming");
    book2.book_id=345;


    printBook(&book1);

    printBook(&book2);

   return 0;
}