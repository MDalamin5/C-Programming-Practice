#include<stdio.h>
int main()
{
    char ch;
    int dig;
    printf("Enter a character: ");
    scanf("%c",&ch);

   


    if (ch=='0' || ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6' || ch=='7' || ch=='8' || ch=='9')
    {
        printf("it is a valid hexadecimal digit");
    }
    



    else if(ch=='a' || ch=='b' || ch=='c' || ch=='d' || ch=='e' || ch=='f')
    {
        printf("It is a valid hexadecimal digit");
    }

    else if( ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='E' || ch=='F') 
    {
        printf("It is a valid hexadecimal digit");
    } 

    else
    printf("It is not a valid hexadecimal digit");

    return 0;
}



//Using lybray Function: 

/*
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the character Number : ");
    scanf("%c",&ch);

    if(isxdigit(ch))
    printf("It is a valid hexadecimal digit");
    
    else
    printf("It is not a valid hexadecimal digit");

}
*/