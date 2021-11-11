// Program To Print Tables From 5 To 10.c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int RN=0,CN=0;

    printf("\n Tables From 5 to 9 As Follows=>\n\n");

    for(RN=1;RN<=10;RN++)
    {
        for(CN=5;CN<=10;CN++)
        {
            printf("%3d",CN*RN);
        }

        printf("\n");
    }
    getche();

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
