#include<stdio.h>
int main()
{
    char *p[5];
    char a[]="Sam" , b[]="Ram" , c[]="Raj" , d[]="Sanskar" , e[]="Steve" ;
    int i;
    p[0]=a,p[1]=b,p[2]=c,p[3]=d,p[4]=e;
    for(i=0;i<5;i++)
    printf("\n %s",p[i]);
}    
    