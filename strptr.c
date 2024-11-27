#include <stdio.h>

struct book {
    char title[50];
    char author[20];
    double price;
    int pages;
};

void details(struct book *strptr) {
    printf("Title: %s\n", strptr->title);
    printf("Author: %s\n", strptr->author);
    printf("Price: %.2lf\n", strptr->price);
    printf("Pages: %d\n", strptr->pages);
}

int main() {
    struct book book1 = {"learn C", "dennis ritchie", 675.50, 325};
    struct book book2 = {"Structured Computer Organisation", "Andrew S. Tanenbaum", 810.50, 874};
    struct book *strptr;

    strptr = &book1;
    details(strptr);
    
    strptr = &book2;
    details(strptr);

    return 0;
}
