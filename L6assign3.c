#include<stdio.h>
int main()
{
    int max_n,min_n,i,sum=0;

    printf("Enter Minimum Number: ");
    scanf("%d",&min_n);
    printf("Enter Maxium Number: ");
    scanf("%d",&max_n);

    for(i=min_n; i<=max_n; i=i+2)
    {
        printf("+ %d ",i);
        sum=sum+i;
    }

    printf("= %d",sum);
}