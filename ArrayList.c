#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,k;
    int arr[1000];

    // create list
    int x;
    printf("Please input the num of elements\n");
    scanf("%d",&x);
    printf("create list finished\n");
    printf("Please input the elements\n");
    for(i=0;i<x; i++){
        scanf("%d",&arr[i]);
    }

     for(i=0;i<x; i++){
        printf("%d\t",arr[i]);
    }
    int p,q;
    printf("Please input insert location and element\t");
    scanf("%d%d",&p,&q);

	// shift elements forward
	for (i = n-1; i >= p; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[p - 1] = x;

	// print the updated array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");







}
