#include<stdio.h>
int main()
{
    int arr[20],i,j,temp;
    for(i=0; i<20; i++)
    {
        scanf("%d",&arr[i]);
    }
    j=i-1;
    i=0;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,arr[i]);
    }

    return 0;
}
