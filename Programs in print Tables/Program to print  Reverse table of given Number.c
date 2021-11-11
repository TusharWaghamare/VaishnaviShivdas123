//program to print  Reverse table of given Number.c

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0, Cnt=0;

    printf("\n Enter A Number To Prints It's Table= ");
    scanf("%d",&No);

    for(Cnt=10;Cnt>=1;Cnt--)
    {
        printf("\n\t %3d %3d %3d ",No,Cnt,(No*Cnt));
    }
    getche();

    printf("\n Thanks!!!");

    getch();
    return 0;
}
