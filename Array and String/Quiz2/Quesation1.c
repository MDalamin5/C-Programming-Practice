#include<stdio.h>
int check_prime();
int maxNum();
int main()
{
    int array[10];
    int new_array[10],j=0;
    int result;
    printf("Enter 10 integer value which not repeted and gatter than 2 : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0; i<10; i++)
    {
       result= check_prime(array[i]);
       if(result==1)
       {
           
          printf("%d ", array[i]);
           new_array[j]=array[i];
           j++;
       }
       

    }

    int value= maxNum(new_array,j);
    printf("\n the mex prime number is: %d",value);

}


int check_prime(int num)     
{
    int flag=0;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int maxNum(int arr[],int j)
{
        int max=arr[0];
        for(int i=0; i<j; i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        return max;
}