#include <stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        
        printf("%d \n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
} 