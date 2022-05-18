#include<stdio.h>
int fibonacci(int n)
{
    if (n==1) return(1);
    else if (n==2) return(1);
    else(fibonacci(n)= fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int a , f;
    printf("\n Enter any number");
    scanf("%d",%a);
    f=fibo(a);
    printf("Sum of digits = %d ",f,a);
    return 0;
}
