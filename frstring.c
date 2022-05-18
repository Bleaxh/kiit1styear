#include<stdio.h>
#include<string.h>
int main()
{
    char  i=0,b[100],ch,count=0;
    printf("Enter a string ");
    gets(b);        
    printf("\nEnter the character to find frequency: ");
    scanf("%c",&ch);
    while(b[i])
        if (ch==b[i++])
        ++count;
    printf("Frequency of %c = %d ",ch,count);
    return 0;
}
