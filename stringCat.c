#include<stdio.h>
#include<string.h>
int main()
{
    char name1[30];
    char name2[10];
    int len1,len2,i;

    printf("Enter a string: ");
    gets(name1);
    printf("Enter another string: ");
    gets(name2);

    /*
    useing predefine functon.
    strcat(name1,name2);
    */
   len1=strlen(name1);
   len2=strlen(name2);

 for(i=0; i<=len2; i++)
 {
     name1[len1+i]=name2[i];
 }

    printf("%s",name1);

}