#include <stdio.h>
void main()
{€
    int i, j, a, n, number[30];
    printf("Enter The Size Of The List: ");
    scanf("%d", &n);

    printf("Enter The Elements: ");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The List In Sequential Order: ");
    for (i = 0; i < n; ++i){
        printf("%d ", number[i]);
    }
    printf("\n");
}
