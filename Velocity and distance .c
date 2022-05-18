# include <stdio.h>
# define g 9.8
int main()
{
    int u,t,s;
    float v; 
    printf("\nEnter the value of u,t,s : ");
    scanf("%d%d%d",&u,&t,&s);
    t=0
    t=t+1
    v=u+g*t;
    printf("\nEnter the value of v: %f ",v);
    v=u*t+0.5*g*t*t;
    printf("\nEnter the value of v : %f ",v);
    return 0;
}    