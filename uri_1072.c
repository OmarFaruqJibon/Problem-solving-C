#include<stdio.h>
int main()
{
    int N,x,i,count=0;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&x);
        if(x>=10 && x<=20)
            count++;
    }
    printf("%d in\n",count);
    printf("%d out\n",N-count);

    return 0;
}
