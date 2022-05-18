#include<stdio.h>
int main()
{ 
    int marks,age;
    printf("Enter the marks");
    scanf("%d",&marks);
    printf("Enter the age");
    scanf("%d",&age);
    if (age < 50)
    {
        marks = marks + 60;
    }    
    else
    {
        marks = marks + 40;
    }
    printf("OUTPUT=%d%d",marks,age);
    return 0 ;         
}