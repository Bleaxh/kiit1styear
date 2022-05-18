#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string ");
    scanf("%c",str);
    while (str[i]!='\0')
        i++;
    printf("Length of the string ; %d",i);
    return 0;    
}