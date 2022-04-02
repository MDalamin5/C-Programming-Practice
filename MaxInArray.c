#include<stdio.h>
int maxarray();
int main()
{
    int a[]={4,3,2,5,44,3};

    int result,index;
    result=maxarray(a,5);
    printf("%d",result);
}

int maxarray(int arr[],int n)
{
    int i,max=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    return max;
}
