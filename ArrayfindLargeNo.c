#include<stdio.h>
int main()
{
    int num[100],i,max,n;
    printf("How many number: ");
    scanf("%d",&n);
    printf("enter your number: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);

    }
    
    max=num[0];
    for(i=0; i<n; i++)
    {
        if(max<num[i])
        max=num[i];
    }
    printf("%d",max);

}