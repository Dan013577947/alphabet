#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i,j;
void delay(int a)
{
    int time;
    int add;

    time = a*10000000;

    for (i=0;i<time;i++)
    {
        for (j=0;j<100;j++)
            add++;
    }
}



void Letter_A()
{

    /* Letter A */
    for (i=0;i<11;i++)
    {
        for(j=0;j<25;j++)
        {
            if(j==11-i || j==11+i ||(i==5 && (j>6 && j<17)))
            {
                 printf("*");
            }
            else {printf(" ");}


        }
        printf("\n");
    }
    printf("\n");

}

void Letter_B()
{
    for (i=0;i<13;i++)
    {
        for(j=0;j<25;j++)
        {
            if(j==1|| (i==0&& (j<18 && j>0)) || (j==18+i && i<2 ) || (j==20&&(i>1&&i<5) ||
                        (i==6 && (j>0 && j<19)||(i==5&&j==19) ||i==12&&(j>0 && j<19) || i==7&&j==19 || i==11 && j==19 ||
                         j==20 && (i>7 && i<11) )))
            {
                 printf("*");
            }
            else {printf(" ");}
        }
        printf("\n");
    }

    printf("\n");
}

void Letter_C()
{
    for (i=0;i<13;i++)
    {
        for(j=0;j<25;j++)
        {
            if(i==0 && (j>2 && j<21)||j==1&&(i>1&&i<11) || j==2 && i==1 || j==2 && i==11 || (j>2&& j<21)&&i==12)
            {
                 printf("*");
            }
            else {printf(" ");}


        }
        printf("\n");
    }
    printf("\n");
}




int main()
{


    Letter_A();
    delay(5);

    Letter_B();
    delay(5);

    Letter_C();








    return 0;
}
