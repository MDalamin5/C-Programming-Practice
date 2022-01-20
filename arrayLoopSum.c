#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    a[0]=10;
    a[1]=10;
    a[3]=10;
    a[4]=14;
    a[2]=10;
    for(i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    printf("the ave is: %.2f",sum/5.0);

}