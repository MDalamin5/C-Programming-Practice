#include<stdio.h>
int main()
{
    int array[7]={5,10,12,9,100,200,500};

    for(int i=7-1; i>=0; i--)
    {
        printf("%d ",array[i]);
    }
}