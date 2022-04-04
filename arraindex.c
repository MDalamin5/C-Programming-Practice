#include<stdio.h>
void maxarray();
int main()
{
    int a[]={44,3,2,5,44,3};

    int result,index;
    maxarray(a,5);
   
}

void maxarray(int arr[],int n)
{
    int i,max=0,index,count=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            index= i+1;
        }
        
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]==max)
        {
            count++;
            printf("%d the place\n",i+1);
        }
    }
    printf("%d is the count\n",count);

    printf("%d max\n", max);
    printf("%d index\n", index);
}