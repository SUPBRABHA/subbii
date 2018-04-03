#include<stdio.h>
void main()
{
    int year=2015;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                printf("leap year");
            else
                printf("Not leap year");
        }
        else
            printf("leap year");
    }
    else
        printf("not leap year");
    getch();
}

               
