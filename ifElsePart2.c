#include<stdio.h>
int main()
{
     int wintd_speed;

     printf("Enter wind Speed");
     scanf("%d",&wintd_speed);

     if(wintd_speed<25)
     {
          printf("not a strong wind");
     }

     else if (wintd_speed>25 && wintd_speed<38)
     {
          printf("Strong Wind");
     }
     
     else if (wintd_speed>39 && wintd_speed<54)
     {
          printf("gale");
     }

     else if (wintd_speed>55 && wintd_speed<54)
     {
          printf("aWhole gale");
     }

     else if (72<wintd_speed)
     {
          printf("Hurricane");
     }

}