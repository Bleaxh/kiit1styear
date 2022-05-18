#include<stdio.h>

    struct book 
    {
        char name [25];
        char author[25];
        int cost;
    };
    void display(struct book*p)
    {
        printf("\n%s %s %d",p->name,p->author,p->cost);
    }
    int main()
    {
        struct book b={"Let us C","YPK",101};
        display(&b);
        return 0;
    }