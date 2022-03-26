#include<stdio.h>
int main()
{
    int i,j,n,r,fact1=1,fact2=1;
    float nPr;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);

    for(i=1;i<=n;i++)
    {
        fact1=fact1*i;
    }
    //printf("%d",fact1);
    if(n>r)
    {
        for(j=1;j<=(n-r);j++)
    {
        fact2=fact2*j;
    }
    }

    else
    {
        printf("please enter value like n is gatter than r");
    }

    nPr=(float)fact1/fact2;

    printf("The nPr = %.2f",nPr);
    
}