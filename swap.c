#include<stdio.h>
void swapbyref(int *x , int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
   // printf("\n x=%d,y =%d,x,y");

}
int main()
{
    int a=10,b=20;
    printf("\n before swaping  a=%d,b=%d", a,b);
    swapbyref(&a,&b);
    printf("\n after swaping a=%d,b=%d", a,b);
    return 0;
}