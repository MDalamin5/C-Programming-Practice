#include<stdio.h>
int main()
{
    int wind_speed;
    printf("Enter the Wind Speed: ");
    scanf("%d",&wind_speed);

    if(wind_speed<25)
    {
        printf("Not a strong wind");
    }

    else if(wind_speed>=25 && wind_speed<=38)
    {
        printf("Strong Wind");
    }
    
    else if(wind_speed>=39 && wind_speed<=54)
    {
        printf("Gale");
    }

    else if(wind_speed>=55 && wind_speed<=72)
    {
        printf("Whole Gale");
    }

    else if(wind_speed>72)
    {
        printf("Hurricane");
    }
    else
    {
        printf("Enter currect integer Wind Speed");
    }
}