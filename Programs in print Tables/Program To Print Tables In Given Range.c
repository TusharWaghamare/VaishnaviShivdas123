// Program to Print Tables In Given Range.c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
    int RN=0, CN=0, SNo=0, ENo=0;

    printf("\n Enter Tables Range From & To= ");
    scanf("%d%d", &SNo,&ENo);

    printf("\n Tables From %d To %d as follows=>\n\n",SNo,ENo);

    printf("\n***********************************************\n");

    for(RN=1;RN<=10;RN++)
    {
        for(CN=SNo;CN<=ENo;CN++)
        {
            printf("%3d",CN*RN);
        }

        printf("\n");
    }

    printf("\n***********************************************\n");


    getche();
    printf("\n Thanks");
    getch();
    return 0;
}
