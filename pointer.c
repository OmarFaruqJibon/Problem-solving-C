#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    display(x,y);

}

void display(int *x, int *y)
{
    printf("x : %d , y : %d\n",*x, *y);
}


int main()
{
    int x = 100,y = 200;

    swap(&x,&y);





    return 0;
}
