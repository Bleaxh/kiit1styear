#include<stdio.h>
int main()
{
    struct person
    {
        char name[10];
        int age;
        char sex[2];
    };
    struct person *ptr,b[10];
    int i;
    ptr = b;
    for(i=0;i<n;i++)
    {
        printf("Enter next person name,age and sex");
        scanf("%s%d%s",(ptr+i)->name,(ptr+i)->age,(ptr+i)->sex);
    }
    for(i=0;i<n;i++)
    {
        printf("%s%d%s",(ptr+i)->name,(ptr+i)->age,(ptr+i)->sex);
    }
}    
