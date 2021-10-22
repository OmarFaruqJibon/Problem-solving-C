#include<stdio.h>
int main()
{
    int n;
    int hundred,fifty,twenty,ten,five,two,one;

    scanf("%d",&n);

    hundred = n/100;

    fifty = (n%100)/50;

    twenty = ((n%100)%50)/20;

    ten= (((n%100)%50)%20)/10;

    five = ((((n%100)%50)%20)%10)/5;

    two = (((((n%100)%50)%20)%10)%5)/2;

    one = ((((((n%100)%50)%20)%10)%5)%2)/1;

    printf("%d\n",n);
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n%d nota(s) de R$ 1.00\n",hundred,fifty,twenty,ten,five,two,one);


    return 0;
}
