#include<stdio.h>
int factorial(int n)
{
    for (n=1;n<9;n=n+1)
    {
        if (n==1) return(1);
        else
        return (n* factorial(n-1));
    }
}
int main()
{
    int a , fact;
    printf("\n Enter any number");
    scanf("%d",%a);
    fact=factorial(a);
    printf("Factorial value = %d",fact );
    return 0;
}
