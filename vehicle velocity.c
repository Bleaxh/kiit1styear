#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter the value of a ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("The valocity is moving with comstant velocity");
    }    
    else if(a>0)
    {
        printf("The valocity is moving with accelerated velocity");
    }    
    else
    {
        printf("The valocity is moving with deccelerated velocity");
    }
    return 0;
}