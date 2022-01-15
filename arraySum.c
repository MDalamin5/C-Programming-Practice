#include<stdio.h>
int main()
{
    int n,i,sum=0, mark [10];
    printf("How Many umber you wat to sum: ");
    scanf("%d",&n);
    printf("eter your umber you wat to sum: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+mark[i];

    }
    printf("%d",sum);


}