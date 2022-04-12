#include<stdio.h>
double ArrayAvg(int arr[],int size);
int main()
{
    int num[5]={10,30,20,40,34};

    double result= ArrayAvg(num,5);
    printf("The Avg is %.2lf",result);
}
double ArrayAvg(int arr[], int size)
{
    double avg,sum=0;
    int i;
    for(i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    avg= sum/size;
    return avg;
}
