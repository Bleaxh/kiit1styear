#include<stdio.h>
int main()
{
    int i,avg,count=0 ,sum=0, marks[20];
    for(i=0;i<20;i++)
    {
        printf("\nEnter the marks");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<20;i++)
    {
        sum=sum+marks[i];
        if(marks[i]<89)
            count++;
    }        
    avg=sum/20;
    printf("\nAverage marks = %d",avg);
    printf("\nNumber of the students secured O grade = %d",count);
    return 0 ;  
}