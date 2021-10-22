#include<stdio.h>
int main()
{
    int n1,n2,temp,gcd;

    printf("Enter Two Integers: ");
    scanf("%d %d",&n1,&n2);

    while(n2!=0){
        temp = n1%n2;
        n1=n2;
        n2=temp;
    }
    gcd = n1;
    printf("GCD = %d\n",gcd);

    return 0;
}
