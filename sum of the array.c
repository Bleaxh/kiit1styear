#include <stdio.h>
int main()
{
    int i,*ptr,sum=0,arr[6]={5,9,8,3,0,1};
    ptr=arr;
    for(i=0;i<6;i++)
        sum += *(ptr+i);
    printf("The sum = %d",sum);
    return 0;
}