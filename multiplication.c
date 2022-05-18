#include <stdio.h>

int main()
{
    int i, j;
    int mat[4][4];

    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }    int no;
    printf("Enter the no. to multiply: ");
    scanf("%d",&no);

    for ( i = 0; i < 4; i++)
    { 
        int j;   
        for (j = 0; j < 4; j++)
        {
            mat[i][j]=mat[i][j]*no;
        }
        
    }
    printf("The result after multiplication is\n");
    for ( i = 0; i < 4; i++)
    {
    	int j;
        for (j = 0; j < 4; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
