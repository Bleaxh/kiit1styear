#include<stdio.h>
int main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };

    struct emp
    {
        char name[25];
        struct address adr;
    };
    
    struct emp e ={"jeru","531076","Nagpur",10};
    printf("\n name=%s,phone = %s",e.name,e.adr.phone);
    printf("\ncity=%s, pin= %d",e.adr.city,e.adr.pin);
}    