//program to print Leap Year...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");

    }
    printf("\n\nThanks!!!");

    getch();
    return 0;
}
