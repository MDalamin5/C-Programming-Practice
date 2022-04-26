#include <stdio.h>
    void swap(int *ptr1, int *ptr2);

    void sw ( int *arr, int k, int size);
    int  main()
    {

        int x[10];
        int i, n,z;

        printf("How many Elements...\n");
        scanf("%d", &n);

        printf("Enter Elements one by one\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", x + i);
        }


        printf("enter k...\n");
        scanf("%d", &z);

        sw ( x, z, n);




    }

void sw ( int *arr, int k, int size){


int i;



        swap(arr+k , arr + k+1);
        printf("\nResultant Array...\n");

        for (i = 0; i < size; i++)
        {
            printf("X[%d] = %d\n", i, arr[i]);
        }

    }




    void swap(int *ptr1, int *ptr2 )
    {

        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

    }