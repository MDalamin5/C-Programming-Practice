#include<stdio.h>
int main()
{
    int i,position,valu,n,element;
    int arr[100];

    printf("Enter your array size: ");
    scanf("%d",&n);

    printf("Enter your array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Which poshition you want to add elments: ");
    scanf("%d",&position);
    printf("Enter your element: ");
    scanf("%d",&element);

    arr[position]=element;

    printf("%d",arr[position]);

    for(i=position; ;)
    {
        
    }
}