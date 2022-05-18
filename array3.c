#include<stdio.h>

int search1(int element)
{
    int arr[20];
    for(int i = 0; i<20; i++)
        arr[i] = i*2;
    for(int i = 20; i>0; i--)
    {
        if(arr[i]==element)
            return i;
    }
    return -1;
}

int search2(int element, int l, int r)
{
    int arr[20];
    for(int i = 0; i<20; i++)
        arr[i] = i*2;
    for(int i = l; i<r; i++)
    {
        if(arr[i]==element)
            return i;
    }
    return -1;
}
int main()
{
    int element, l, r;
    printf("Search\n");
    printf("Enter the element: ");
    scanf("%d", &element);
    printf("Element %d found at %d\n", element, search1(element));
    printf("\nSearch within Bounds\n");
    printf("Enter the element: ");
    scanf("%d", &element);
    printf("Enter the left bound: ");
    scanf("%d", &l);
    printf("Enter the right bound: ");
    scanf("%d", &r);
    printf("Element %d found at %d!\n", element, search2(element, l, r));
}