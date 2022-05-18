#include<stdio.h>

struct book
{
    char name[25];
    char author[25];
    int cost;
};

void displayInd(char*s,char*t,int c)
{
    printf("\n%s %s %d",s,t,c);
}
void displayEntire(struct book b)
{
    printf("\n%s %s %d",b.name,b.author,b.cost);
   
}
void main()
{
    struct book p={"Let us C","YPK",100};
    displayInd(p.name,p.author,p.cost);
    displayEntire(p);
    
}   