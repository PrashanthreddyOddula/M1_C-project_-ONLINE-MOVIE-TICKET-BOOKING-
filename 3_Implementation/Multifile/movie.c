/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int i;
struct films
{
    char mtitle[50];
    float mrating;
    char mhall[50];
    int mfare;
};
struct films ar[5];
int main()
{
    int choice=0,cfare,nper,cfilm,chall,cost=0;
    while (choice!=6)
    {
    printf("\nChoose your option\n");
    printf("1.Admin\n2.Available movies\n3.Ticket booking\n4.Print ticket\n5.Refund\n6.Exit");
    scanf("%d",&choice);
      switch (choice)
      {
        case 1:
        {
            ar[0].mfare=300;
            ar[1].mfare=200;
            ar[2].mfare=150;
          int pin;
          printf("Enter Pin\n");
          scanf("%d",&pin);
          if (pin!=2424)
               printf("Wrong pin\n");
          if (pin==2424)
          {
            printf("Enter movie names and ratings: \n");
            for (i=0;i<5;i++)
               {
                  scanf(" %[^\n]\n%f",ar[i].mtitle,&ar[i].mrating);
                }
              printf("Enter malls :\n");
                for (i=0;i<5;i++)
               {
                  scanf(" %[^\n]",ar[i].mhall);
                }
            int z=0;
            while (z!=3)
            {
            printf("Choose an option :\n");
            printf("1.change movies\n2.update ratings\n3.Exit\n");
            scanf("%d",&z);
            if (z==1)
            {
                printf("Which movie do you want to change :\n");
                for (i=0;i<5;i++)
                {
                  printf("%d)%s - IMDB:%0.1f\n",i+1,ar[i].mtitle,ar[i].mrating);
                }
                int j;
                scanf("%d",&j);
                scanf(" %[^\n]\n%f",ar[j-1].mtitle,&ar[j-1].mrating);
            }
            if (z==2)
            {
                printf("which movie rating do you want to change :\n");
                for (i=0;i<5;i++)
                {
                  printf("%d)%s - IMDB:%0.1f\n",i+1,ar[i].mtitle,ar[i].mrating);
                }
                int k;
                scanf("%d",&k);
                scanf("%f",&ar[k-1].mrating);
            }
            if (z>3)
                printf("-------->Enter valid option!!\n");
           }
          }
               break;

        }
        case 2:
        {
            for (i=0;i<5;i++)
            {
                printf("%s - IMDB:%0.1f\n",ar[i].mtitle,ar[i].mrating);
            }
            break;
        }
        case 3:
        {
            printf("Choose a movie you want to watch :\n");
            for (i=0;i<5;i++)
            {
                printf("%d)%s - IMDB:%0.1f\n",i+1,ar[i].mtitle,ar[i].mrating);
            }
            scanf("%d",&cfilm);
            printf("No.of tickets required : \n");
            scanf("%d",&nper);
            printf("Choose a cinema hall :\n");
            for (i=0;i<5;i++)
            {
              printf("%d)%s\n",i+1,ar[i].mhall);
            }
            scanf("%d",&chall);
            printf("Choose type of seats :\n");
                printf("1)VIP-Rs.%d\n",ar[0].mfare);
                printf("2)BALCONY-Rs.%d\n",ar[1].mfare);
                printf("3)NORMAL-Rs.%d\n",ar[2].mfare);
            scanf("%d",&cfare);
            if (cfare==1)
                cost = nper*ar[0].mfare;
            if (cfare==2)
                cost = nper*ar[1].mfare;
            if (cfare==2)
                cost = nper*ar[2].mfare;
            break;
        }
        case 4 :
            {
                printf("\nYOUR E-TICKET : \n\n");
                printf("%s\n",ar[cfilm-1].mtitle);
                printf("No.of persons - %d\n",nper);
                printf("Seat Type - %d\n",cfare);
                break;
            }
        case 5 :
            {
                printf("\nYOUR Ticket : \n\n");
                printf("%s\n",ar[cfilm-1].mtitle);
                printf("No.of persons - %d\n",nper);
                printf("Seat Type - %d\n",cfare);
                printf("Refund of your Ticket of cost Rs.%d is successful.\n",cost);
                break;
            }
        case 6 :
            break;
        default :
          {
            printf("------>Enter valid option!!\n");
             break;    
            }  
}



    }


    return 0;
}
