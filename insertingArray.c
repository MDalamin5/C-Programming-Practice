#include<stdio.h>
int main()
{
    int i,position,valu,n,element=0;
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

    

    //printf("%d",arr[position]);

    for(i=n-1; i>=position-1; i--)
    
    {
        arr[i+1]=arr[i];
    }

    arr[position-1]=element;

    for(i=0; i<n+1; i++)
    {
        printf("%d\t",arr[i]);
    }


}