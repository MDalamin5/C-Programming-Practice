#include<stdio.h>
int main()
{
    int array[5]={2,4,6,3,5};
    int max=array[0];
    int SL= array[0];

    for(int i=0; i<5; i++)
    {
        if(max<array[i])
        {
            SL=max;
            max=array[i];
            
        }
    }
    printf("%d",SL);

}