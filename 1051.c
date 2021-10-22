#include<stdio.h>
int main()
{
    float x;
    float tax=0.0;
    scanf("%f",&x);

    if(x>=0.00 && x<=2000.00){
        printf("Isento\n");
    }else if(x>=2000.01 && x<=3000.00){
        x = x - 2000.00;
        tax = (x*8)/100;
        printf("R$ %.2f\n",tax);

    }else if(x>=3000.01 && x<=4500.00){
        x = x - 3000.00;
        tax = (x*18)/100;
        printf("R$ %.2f\n",tax+80);
    }else if(x>4500.00){
        x = x - 4500;
        tax = (x*28)/100;
        printf("R$ %.2f\n",tax+80+270);

    }
    return 0;
}
