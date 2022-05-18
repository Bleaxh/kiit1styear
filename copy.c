#include<stdio.h>
int main()
{
    struct employee
    {
        char name[25];
        int age;
        float salary;
    };
    struct employee e1={"Sanjay",30,55.50};
    struct employee e2,e3;  
    e2.age=e1.age;
    e2.salary=e1.salary;
    strcpy(e2.name,e1.name);
    
    return 0;
}    