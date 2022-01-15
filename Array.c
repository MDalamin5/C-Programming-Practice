#include<stdio.h>
int main()
{
    int i, sum=0, mark[5]={80,90,100,50,40};
    for (i=0; i<=4;i++)
    {
        sum= sum+mark[i];
        
    }
    printf("%d \n",sum);

}