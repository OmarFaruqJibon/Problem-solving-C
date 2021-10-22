#include<stdio.h>
int main()
{
    int x,y,i;
    float total=0;
    scanf("%d%d",&x,&y);

    if(x==1){
        total= y*4.00;
        printf("Total: R$ %.2f\n",total);
    }else if(x==2){
        total= y*4.50;
        printf("Total: R$ %.2f\n",total);
    }else if(x==3){
        total= y*5.00;
        printf("Total: R$ %.2f\n",total);
    }else if(x==4){
        total= y*2.00;
        printf("Total: R$ %.2f\n",total);
    }else if(x==5){
        total= y*1.50;
        printf("Total: R$ %.2f\n",total);
    }

    return 0;
}
