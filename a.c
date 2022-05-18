#include<stdio.h>
int main()
{
    char a[]="Sam" , b[]="Ram" , c[]="Raj" , d[]="Sanskar" , e[]="Steve" ;
    char *p[5];
    int i,j, count=0;
    p[0]=a,p[1]=b,p[2]=c,p[3]=d,p[4]=e;
    for(i=0;i<5;i++)
    {
        for(j=0;p[i][j]!='\0';j++)
            if(p[i][j]=='a')
                count++;    

    }
printf("\n%d",count);
}
