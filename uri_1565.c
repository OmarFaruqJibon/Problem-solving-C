#include<stdio.h>
int main()
{
    int n,i;
    while(i!=EOF){
        for(i=0;i<100;i++){
            scanf("%d",&n);
            if(n>0) printf("vai ter dusa\n");
            else printf("vai ter copa\n");
        }
    }
    return 0;
}
