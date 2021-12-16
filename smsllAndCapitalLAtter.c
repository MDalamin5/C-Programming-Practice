#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    printf("please enter a char: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("its Capital Number");
    else if(ch>='a' && ch<='z')
    printf("its small latter");
    else
    printf("its not a latter");
    
}