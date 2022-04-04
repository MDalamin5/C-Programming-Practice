#include<stdio.h>
int main()
{
    int i,position,n;
    int mark[100];

    printf("How many array want to add: ");
    scanf("%d",&n);

    printf("Enter your Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&mark[i]);
    }

    printf("Which poshition array want to delete: ");
    scanf("%d",&position);

    for(i=position; i<n; i++)
    {
        mark[i]=mark[i+1];
    }

    for(i=0; i<n-1; i++)
    {
        printf("%d\t",mark[i]);
    }
}