#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a cahr loetter: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("its Vawel");
              break;
        default:
        printf("Its consant");
    }
}