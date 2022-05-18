#include<stdio.h>
int main()
{
    int  num,flag=1,i;
    for (num=1;num<=100;num++)
    {
        for(i=2;i<=num/2;i++)
        {
            if (num % i==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            printf("prime number");
        }
        else
        {
            printf("Not a prime number");
        } 
    }
    return 0;
}
