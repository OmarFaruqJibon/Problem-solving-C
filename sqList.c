#include<stdio.h>
#include<stdlib.h>

int a[30], i, j, n, b[30];
void insert(int, int);
void delet(int);
void display();

int main()
{
    int ch,position,x,posi,f,max,min,p;
    printf("\nEnter how many elements you want to insert: ");
    scanf("%d", &n);
    printf("\nEnter Numbers in Array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("The array is: ");
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
        printf("%d ", a[i]);
    }
    printf("\n");


            printf("Enter a number you want to insert: ");
            scanf("%d", &x);
            printf("Enter the element position: ");
            scanf("%d", &position);
            insert(x,position);
            //display();

            printf("Enter the position you want to delete: ");
            scanf("%d", &posi);
            delet(posi);
            //display();

   return 0;
}

void insert(int k, int pos)
{
    if(pos>n+1 || pos<=0)
    {
        printf("Invalid position!");
    }
    else
    {
        for(i=n; i>=pos; i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1] = k;
        n++;
        printf("Array elements after insertion : ");
        for(i=0; i<n; i++)
            printf("%d ", a[i]);
        n--; //In display() function, there's an extra element 0 comes out after inserting. That's why I decrement the size of n after displaying the new array.
        printf("\n");
    }
}

void delet(int position)
{
    if (position >= n+1)
        printf("Deletion is not possible.\n");
    else
    {
        for (i=position-1; i<n-1; i++)
            a[i] = a[i+1];

        printf("After deleting, the new array is: ");
        for (i=0; i<n-1; i++)
            printf("%d ", a[i]);
    }
    printf("\n");
}

void display()
{
    for(i=0; i<n; i++)
        printf("%d ", b[i]);
    printf("\n");
}
