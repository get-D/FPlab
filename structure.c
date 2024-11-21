#include <stdio.h>

struct book{
        char title[50];
        char author[20];
        double price;
        int pages;
    };
    
int main()
{
    
    struct book book1 = {"learn C", "dennis ritchie",675.50,325}, book2;
    book2 = book1;
    
    printf("Title: %s\n", book2.title);
    printf("author: %s\n", book2.author);
    printf("price: %lf\n", book1.price);
    printf("pages: %d\n", book1.pages);

    return 0;
}