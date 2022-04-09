#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[80];
  	int i, j, k;
      int length;
 
  	printf(" Please Enter a String :  ");
  	gets(str);

      length= strlen(str);
  	 	
  	for(i = 0; i < length; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	
	printf("\n The String after Removing All Duplicates = %s ", str);
	
  	return 0;
}