#include<stdio.h>
int main()
{
    int sum = 0, n, count=0,i;
    for(i=0;i< 10;i++)
    {
        printf("\n Enter the next number :");
        scanf("%d",&n);
        if (n%2==1)
        {
            count++;
            sum+=n;
        }
    }
    printf("Enter the number of odd number = %d  and sum of the odd number= %d ",count,sum);
    return 0;
}