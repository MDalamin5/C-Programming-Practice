#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    int i;
    char s1[30];
    char temp[50];
    printf("enter a stering: ");
    gets(s1);

   strcpy(temp,s1);
int len= strlen(temp);
for(i=0; i<len/2; i++){
ch= temp[i];
temp[i]= temp[len-1-i];
temp[len-1-i]= ch;
}


   if(strcmp(s1,temp)==0){
       printf("This string is Palindrome.");
   }
   else{
       printf("Not palindrom");
   }
}