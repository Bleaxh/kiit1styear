#include<stdio.h>  
 int main()    
{    
    int n,fact=1,m,i;    
    printf("Enter a number:");    
    scanf("%d",&n); 
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf(" The value of factorial of the given number:  %d ", fact);
    return 0;
}        
    