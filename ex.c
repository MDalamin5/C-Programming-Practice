#include<stdio.h> 

int main() 
{ 
int a[10],b[10],sum[10],i; 
printf("enter the first array"); 
for(i=0;i<10;i++) 
 scanf("%d",&a[i]); 
printf("enter the second array");  
for(i=0;i<10;i++) 
 scanf("%d",&a[i]); 
for(i=0;i<10;i++) 
 sum[i]=a[i]+b[i]; 
printf(“sum of two array is");  
for(i=0;i<10;i++) 
 printf("%d",sum[i]); 
getch();  
 }