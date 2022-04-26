#include <stdio.h>
    void swap(int *ptr1, int *ptr2);

    void sw ( int *arr, int k, int size);
    int  main()
    {

        int x[10];
        int i, n,pos;

        printf("How many elements: ");
        scanf("%d", &n);

        printf("Enter your elements : \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", x + i);
        }


        printf("Enter your swaping position: \n");
        scanf("%d", &pos);

        sw ( x, pos, n);




    }

void sw ( int *arr, int k, int size){


int i;



        swap(arr+k , arr + k+1);
        printf("\nAfter swaping\n");

        for (i = 0; i < size; i++)
        {
            printf("Array[%d] = %d\n", i, arr[i]);
        }

    }




    void swap(int *ptr1, int *ptr2 )
    {

        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

    }