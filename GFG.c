#include<stdio.h>

/* Function to swap *a and *b */
void swap(int *a, int *b);

void EvenOdd(int arr[], int size)
{
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
    while (left < right)
    {
        while (arr[left]%2 == 1 && left < right)
            left++;

        while (arr[right]%2 == 0 && left < right)
            right--;

        if (left < right)
        {
            /* Swap arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

/* swapping FUNCTIONS */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Main function */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 0;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("Before: ");
    for (i = 0; i < arr_size; i++){
        printf("%d ", arr[i]);
    }

    EvenOdd(arr, arr_size);

    printf("\nAfter:  ");
    for (i = 0; i < arr_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}
