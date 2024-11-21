#include <stdio.h>

struct book{
        char title[50];
        char author[20];
        double price;
        int pages;
    };
    
int main()
{
    
    struct book book1 = {"learn C", "dennis ritchie",675.50,325};
    struct book book2 = {"Structured Computer Organisation", "Andrew S. Tanebaum",810.50,874};
    struct book *strptr;
    strptr = &book1;
    
    printf("Title: %s\n", strptr-> title);
    printf("author: %s\n", strptr-> author);
    printf("price: %lf\n", strptr-> price);
    printf("pages: %d\n", strptr-> pages);
    
    strptr= &book2;
    
    printf("Title: %s\n", strptr-> title);
    printf("author: %s\n", strptr-> author);
    printf("price: %lf\n", strptr-> price);
    printf("pages: %d\n", strptr-> pages);

    return 0;
}
