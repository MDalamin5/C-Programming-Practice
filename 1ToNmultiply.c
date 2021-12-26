#include<stdio.h>
int main()
{
    int n,into=1,i;
    printf("enter your serise last number: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        into=into*i;
    }
    printf("%d",into);

}