#include<stdio.h>

void change(int *x)
{
    x = 20;
    printf("%d\n", x);
    printf("%d\n", *x);
}

int main()
{
    int x = 10;

    change(&x);

    printf("%d\n",&x);

    printf("%d\n", x);

    return 0;
}
