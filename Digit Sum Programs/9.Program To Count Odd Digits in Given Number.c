// 9.Program To Count Odd Digits in Given Number.c

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
            int No = 0, Temp = 0, OCnt = 0, Dig = 0;

            printf("Enter +ve Integer Number To Count Odd Digits in it : ");
            scanf("%d", &No);

            Temp = No;

            if(No < 0)
            {

                    printf("Invalid Number"); return -1;
            }

            while(Temp > 0 )
            {
                Dig = Temp %10;

                if(Dig % 2 == 1)
                {
                    OCnt++;
                }
                Temp = Temp/10;
            }

            printf("\n Count Of Odd Digits in Given Number %d is = %d.", No, OCnt);

            getch();
            return 0;
}
