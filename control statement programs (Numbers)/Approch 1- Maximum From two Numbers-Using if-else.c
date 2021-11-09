//Approch 1: Maximum From two Numbers-Using if-else:

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Num1=0, Num2=0;

    printf("\n Enter 2 Integer Number= ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1>Num2)
    {
        printf("\n Number %d is Maximum",Num1);

    }
    else
    {
        printf("Number %d is Miximum",Num2);
    }

    getch();
    return 0;
}
