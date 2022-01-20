#include<stdio.h>
int main()
{
    int a[30];
    int i,n;
    a[0]=0;
    a[1]=1;
    printf("Enter your numbr: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        a[i]= a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        }
}