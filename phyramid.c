#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,k;
    //clrscr();
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf(" %d ",k);
        }
        printf("\n");
    }
    getch();
}
