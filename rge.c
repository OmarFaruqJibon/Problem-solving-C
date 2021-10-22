#include <stdio.h>
void sort(int n, int* ptr)
{
	int i, j, t;

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (*(ptr + j) < *(ptr + i)) {
				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}

	// print the numbers
	printf("The List In Sequential Order: ");
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}

int main()
{
    int list[1000];
    int n,i;
    printf("Please Input Size Of The List : ");
    scanf("%d",&n);
    printf("Please Input the Elements: ");
	for(i=0; i<n; i++){
        scanf("%d",&list[i]);
	}
	sort(n, list);
    printf("\n\n");
	return 0;
}
