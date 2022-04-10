#include<string.h>
#include<stdio.h>
int main()
{
            char name[30];
            int count = 0,i=0;
            printf("Enter a string: ");
            gets(name);
        //count = strlen(name);

        while (name[i]!=0)
        {
            count++;
            i++;
        }
        printf("The string length is : %d",count);

}