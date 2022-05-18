#include<stdio.h>
int main(void)
{
    int n,rev_n=0,org_n;
    printf("Enter the Number ");
    scanf("%d",&n);
    org_n=n;
    do 
    {
        rev_n=rev_n*10+n%10;
        n=n/10;

    }
    while(n!=0);
    printf("\n The reverse number is : %d",rev_n);
    if (org_n==rev_n)
    printf("\n Given number is the palindrome:  ");
    else
    printf("\n Given number is the NOT palindrome: ");
    
}