#include<stdio.h>
int main()
{
    int size;
    printf("Enter your array size: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter your elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
   int sum=0,count=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+array[i];
        count++;
    }
    float avg= (float)sum/count;
    printf("Average = %f\n",avg);

    printf("the elements greater than average are:");
    for(int i= 0; i<5; i++)
    {
        if(avg<array[i])
        {
            printf("%d ",array[i]);
        }
    }

}