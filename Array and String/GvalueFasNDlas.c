#include<stdio.h>
void search_Index();
int main()
{
    int array[7]={1,2,5,2,4,5,2};
    int value,index,i;
    printf("Enter your value for index searching: ");
    scanf("%d",&value);
    search_Index(array,7,value);
    
}
void search_Index(int arr[],int seze, int terget)
{
    int i;
    int first_index= -1;
    int last_index= -1;

    for(i=0; i<seze; i++)
    {
        if(arr[i]==terget)
        {
            if(first_index== -1)
            {
                first_index= i;
                 last_index= i;
            }
            else
            {
                last_index= i;
            }
        }
    }

    if(first_index != -1)
    {
        printf("First indez is : %d\n",first_index);
        printf("Last indez is : %d\n",last_index);

    }
    else
    {
        printf("Tetget not found any index,");
    }
}