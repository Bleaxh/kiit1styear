#include <stdio.h>
int main()
{

int i, j, n, max = 0;
printf("Enter the value of n ");
scanf("%d", &n);

int M[n][n];

for (i = 0; i < n; i++)
{
    for (j = 0; j < n; j++)
    {
        printf("Enter data in [%d][%d]: ", i, j);
        scanf("%d", &M[i][j]);
    }
}
for (i = 0; i < n; i++)
{
    for (j = 0; j < n; j++)
    {
        printf("%d\t", M[i][j]);
    }
    printf("\n");
}   printf("\n");

for (i = 0; i < n; i++)
{

    printf("%d\t", M[i][i]);
    printf("\n");


    if (M[i][i] > M[i + 1][i + 1])
    {
        max = M[i][i];
    }   
    else max = M[i + 1][i + 1];
}
printf("\nMax. diagonal matrix element: %d", max);
return 0;
}