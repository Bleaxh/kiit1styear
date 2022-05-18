#include<stdio.h>
void main()
{
    int rollno=0,m,c,b,pcom,eg,i=1;
    float score, max=-1.0;
    while(i<=8)
    {
        score=0
        printf("Enter the marks of each the student \n ", i);
        scanf("%d %d %d %d %d",&m,&c,&b,&pcom,&eg);

        score=m+c+b+pcom+eg/5.0;
        if (score>max)
        {
            max=score;
            rollno=i;
        }
        i++;
    }
}