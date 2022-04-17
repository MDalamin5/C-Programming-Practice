#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[40];
    char cpy_str[40];
    int i,j,k;

    printf("Enter your string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        
    }
    //puts(str);

    

    for(i=0 ; str[i] !='\0';  i++)
    {
        for(j=i+1; str[j] !='\0'; j++)
        {
            if(str[i]==str[j])
            {
                for(k=j; str[k] !='\0'; k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    //puts(str);
    strcpy(cpy_str,str);

   int len= strlen(cpy_str);
   for(i=0; i<len; i++)
   {
       if(cpy_str[i]>= 'a' && cpy_str[i]<= 'z')
       {
           printf("%c, ",cpy_str[i]);
       }
       
   }

    
}