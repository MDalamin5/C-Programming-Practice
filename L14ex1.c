#include <stdio.h>

#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void findFirstAndLast(int arr[], int n, int target)
{
    int firstIndex = -1; 
    int lastIndex = -1; 
    int i = 0; 
    for (i = 0; i < n; i++)
    {
        
        if (arr[i] == target)
        {
            if (firstIndex == -1)
            {
                
                firstIndex = i;
                lastIndex= i;
            }
            else
            {
                
                lastIndex = i;
            }
        }
    }
    if (firstIndex != -1)
    {
        printf("First Occurrence = %d\n",firstIndex);
        printf("Last Occurrence = %d\n",lastIndex);
    }
    else
    {
        printf("Element Not Found in Array");
    }
}
int main()
{
    int arr[] = {5,7,7,8,8,8,10};
    int element= 8;
    const int N = ARRAY_SIZE(arr);
    findFirstAndLast(arr,N,element);
    return 0;
}