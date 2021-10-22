#include<stdio.h>
#include<math.h>
int main()
{
    int  a,b,c,n;
    double p;


    scanf("%d %d %d",&a,&b,&c);
    p = pow(a,b);
    n= (int)p%c;

    printf("\n pow=%lf",p);
    printf("\n modular=%d",n);

    return 0;
}
