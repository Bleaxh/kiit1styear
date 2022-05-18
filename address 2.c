#include <stdio.h>
int main()
{
    int arr[2][2]={{5,9},{8,3}},b;

    printf("The value = %u",&b);
    printf("The value = %u",*&b);
    printf("The value = %u",*b);
    printf("The value = %u",**b);
    printf("The value = %u",*(*(b+2)+1));
    printf("The value = %u",*(*(b+3)+2));

}

