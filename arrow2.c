#include<stdio.h>
int main()
{
    struct book
    {
        char name[25];
        int pages;
        float price;
    };
    struct book *ptr,b[5];
    int i;
    ptr = b;
    for(i=0;i<n;i++)
    {
        printf("Enter next book name,prince and pages");
        scanf("%s%f%d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
    }
    for(i=0;i<n;i++)
    {
        printf("%s%f%d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
    }
}    