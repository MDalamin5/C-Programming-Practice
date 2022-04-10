#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    char name1[30]={"alamin"};

    printf("Enter a string: ");
    scanf("%s",name);

    printf("%10.5s\n",name);
     
    printf("%s\n", &name[2]);
    puts(name1);
}