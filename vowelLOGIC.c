#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a charecter number: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i'||ch=='o'|| ch=='u')
    printf("Its Vowel");
    else
    printf("Its consonent");
}