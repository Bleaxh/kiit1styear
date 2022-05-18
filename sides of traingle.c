#include<stdio.h>
int main()
{
    int a,b,c,t,s;
    printf("Enter the value of a ");
    scanf("%d" , &a);
    printf("\n Enter the value of b \n");
    scanf("%d" , &b);
    printf("\n Enter the value of c \n");
    scanf("%d" , &c);
    t=((a+b)>c) && ((b+c)>a) && ((c+a)>b);
    s=t * (a+b+c);
    printf("Do they satisfy the property of the traingle \n?  %d",t);
    printf(" \n Dispaly 0 for no , Display  1 for yes, \n %d",s);
    
    return 0;
}


