#include<stdio.h>
int large_sum(int *a , int *b, int n)
{
    int i,s1=0,s2=0;
    for (i =0 ; i<n ; i++)
    {
        s1+=a[i];
        s2+=b[i];
    }
    if (s1==s2)
        return 0;
    else if (s1<s2)
        return 1;
    else 
        return 2;
}
int main()
{
    int x[20],y[10],g;
    g=large_sum(x,y,10);
    if (!g)
        printf("Both the sum are equal");
    else if (g==1)
        printf("x is greater than y ");
    else 
        printf("y is greater than x ");    

}    