#include<stdio.h>
int main()
{
    int i,m[20],item,pos=-1;
    printf("\nEnter item: ");
    scanf("%d",&item);
    for (i=0;i<20;i++)
    {
        printf("\nEnter the data: ");
        scanf("%d",&m[i]); 

    }
    for (i=0;i<20;i++)
    {
        if(item==m[i])
        {
            pos=i;
            break;
        }
        
    }
    if (pos==-1)
    printf("\n Item is not present ");
    else
    printf("\n Item is  present ");
    return 0;
}