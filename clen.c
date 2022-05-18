#include <stdio.h>  
int main()  
{  
    char char1[20];  
    char char2[20]; 
    int i,j;  
    printf("Enter the first string");  
    scanf("%s",char1);  
    printf("\nEnter the second string");  
    scanf("%s",char2);  
    for(i=0;char1[i]!='\0';i++);   
    for(int j=0;char2[j]!='\0';j++)  
    {  
        
        char1[i]=char2[j]; 
        i++;  
    }  
    char1[i]='\0';  
    printf("After concatenation, the string is : %s", char1);  
    while (char1[i]!='\0')
        i++;
    printf("\nLength of the string ; %d",i);

    return 0;

}   