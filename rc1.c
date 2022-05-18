#include<stdio.h>
int main()
{
    int i,j;
    int a[4][5];
    for (i=0;i<5;i++)
    {    
        for(j=0;j<6;j++)
        {
            printf("Enter the value of [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            
        }
    }    
    for (i=0;i<5;i++)
    {    
        for(j=0;j<6;j++)
        {
            printf("%d\n",&a[i][j]);
        }
        printf("\n");
    }       
}   