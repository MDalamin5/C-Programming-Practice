#include<stdio.h>
int main()
{
    int amount,fiveh,oneh,fifty,twenty,ten,five,two,one,totalam,rem,rem1,rem2;
    printf("Enter Your Amount: ");
    scanf("%d",&amount);
    printf("Enter the number of notes: \n");
    

    printf("500: ");
    scanf("%d",&fiveh);

    printf("100: ");
    scanf("%d",&oneh);

    printf("50: ");
    scanf("%d",&fifty);

    printf("20: ");
    scanf("%d",&twenty);

    printf("10: ");
    scanf("%d",&ten);

    printf("5: ");
    scanf("%d",&five);

    printf("2: ");
    scanf("%d",&two);

    printf("1: ");
    scanf("%d",&one);

    totalam=(500*fiveh)+(100*oneh)+(50*fifty)+(20*twenty)+(10*ten)+(5*five)+(2*two)+(1*one);

    int note500,note100,note50,note20,note10,note5,note2,note1;
    int not500 =0;
    int not100 =0;
    int not50 =0;
    int not20 =0;
    int not10 =0;
    int not5 =0;
    int not2 =0;
    int not1 =0;

    int rem3,rem4,rem5,rem6;
    int rt1,rt2,rt3,rt4,rt5,rt6,rt7;
    rem=amount;

    if(totalam>=amount)
    {
       printf("Here checking he can pay or not\n");

        {
            if(fiveh>0 &&(500*fiveh <=amount))
        {
            rem1=500*fiveh;
            
            note500=rem1/500;
            not500=500*note500;
            rem=amount-rem1;
            printf("500: %d\n",note500);
        }
        else
        printf("500: 0\n");
        not500=0;

        }



      {
          if(oneh>0)
          {
              rt1=100*oneh;
              
                

              if(rt1<=rem)
              {
                  note100=rt1/100;
                  not100=100*note100;
                  printf("100: %d\n",note100);
                  rem=rem-rt1;
              }
              else
              {
                  note100=rem/100;
                  not100=100*note100;
              printf("100: %d\n",note100);
              rem=rem-(100*note100);
              }
                    

          }

          else
          printf("\n100: 0\n");
      }

      {
          if(fifty>0)
          {
              rt2=50*fifty;

              if(rt2<=rem)
              {
                  note50=rt2/50;
                  not50=50*note50;
                  printf("50: %d\n",note50);
                  rem=rem-rt2;
              }

              else
              {
                  note50=rem/50;
                  not50=50*note50;
              printf("50: %d\n",note50);
              rem=rem-(50*note50);
              }
          }

          else
          printf("\n50: 0\n");
      }

      {
          if(twenty>0)
          {
              rt3=20*twenty;

              if(rt3<=rem)
              {
                  note20=rt3/20;
                  not20=20*note20;
                  printf("20: %d\n",note20);
                  rem=rem-rt3;
              }

              else
              {
                  note20=rem/20;
                  not20=20*note20;
              printf("20: %d\n",note20);
              rem=rem-(20*note20);
              }
          }
            else
            printf("\n20: 0\n");

      }

      {
          if(ten>0)
          {
              rt4=10*ten;

              if(rt4<=rem)
              {
                  note10=rt4/10;
                  not10=10*note10;
                  printf("10: %d\n",note10);
                  rem=rem-rt4;
              }

              else
              {
                  note10=rem/10;
                  not10=10*note10;
              printf("10: %d\n",note10);
              rem=rem-(10*note10);
              }
          }

          else
          printf("\n10: 0\n");
      }

      {
          if(five>0)
          {
              rt5=5*five;

              if(rt5<=rem)
              {
                  note5=rt5/5;
                  not5=5*note5;
                  printf("5: %d\n",note5);
                  rem=rem-rt5;
              }

              else
              {
                  note5=rem/5;
                  not5=5*note5;
              printf("5: %d\n",note5);
              rem=rem-(5*note5);
              }
          }

          else
          printf("\n5: 0\n");
      }

      {
          if(two>0)
          {
              rt6=2*two;

              if(rt6<=rem)
              {
                  note2=rt6/2;
                  not2=2*note2;
                  printf("2: %d\n",note2);
                  rem=rem-rt6;
              }

              else
              {
                  note2=rem/2;
                  not2=2*note2;
              printf("2: %d\n",note2);
              rem=rem-(2*note2);
              }
          }

          else
            printf("\n2: 0\n");
      }

      {
          if(one>0)
          {
              rt7=1*one;

              if(rt7<=rem)
              {
                  note1=rt7/1;
                  not1=1*note1;
                  printf("1: %d\n",note1);
                  rem=rem-rt1;
              }

              else
              {
                  note1=rem/1;
                  not1=1*note1;
              printf("1: %d\n",note1);
              rem=rem-(1*note1);
              }
          }

          else
            printf("\n1: 0\n");
      }

        

    }
    

    else
    printf("not to pay");


   int givenV;
   givenV=note500+not100+not50+not20+not10+not5+not2+not1;

   if(givenV==amount)
   {
       printf("Farhan Can Pay The bills ");
   }

   else
   printf("Not to Becouse Some Note are not avilable ");




}