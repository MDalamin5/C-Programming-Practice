#include<stdio.h>
int main()
{
    int i,array2[5];
    int array1[5]={10,3l,4,42,6};
    for(i=0;i<5;i++)
    {

        printf("%d ", array1[i]);
    }

    for(i=0;i<5;i++)
    {
        array2[i]=array1[i];

    }
    for(i=0;i<5;i++)
    {

        printf("%d ",array2[i]);
    }
}
