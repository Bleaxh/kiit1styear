#include <stdio.h>
int main()
{
    int arr[6]={5,9,8,3,0,1},a;

    printf("The value = %u",&a);
    printf("The value = %u",*&a);
    printf("The value = %u",*(a+1));
     printf("The value = %u",*(a+9));

}

