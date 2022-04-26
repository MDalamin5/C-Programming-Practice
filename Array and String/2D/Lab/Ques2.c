#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    char arr[100],arr2[100];
    int i, len, vowel, consonant;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {

            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  ){
                arr[i]=str[i];
                vowel++;

               }


            else
                  arr2[i]=str[i];
                consonant++;
        }
    }


     printf("vowel");
for(i=0; i<=vowel; i++)
    {


        printf("%c",arr[i]);
    }


  printf(" consonent");
    for(i=0; i<=consonant; i++)
    {


        printf(" %c",arr2[i]);
    }


    return 0;
}