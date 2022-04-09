#include<stdio.h>
int Sec_large();
int Sec_smallest();
int main()
{
    int result,result2;
    int arr[5]={5,3,2,4,6};
    result= Sec_large(arr,5);

    printf("The 2nd max value is: %d\n",result);

    result2= Sec_smallest(arr,5);

    printf("The 2nd small value is: %d\n",result2);

    
}

int Sec_large(int array[],int size)
{
    int i;
    
    int scend_large= array[0];
    int first_large= array[0];

    for(i=0; i<size; i++)
    {
        if(array[i] > first_large)
        {
           scend_large= first_large;
           first_large= array[i] ;
            
        }
        

    }

    return scend_large;

}

int Sec_smallest(int array[],int size)
{
   int i;
   int scend_small=array[0];
   int first_small= array[0];

   for(i=0; i<size; i++)
   {
       if(array[i]<first_small)
       {
           scend_small= first_small;
           first_small= array[i];
       }
   }

   return scend_small;
}
