#include <stdio.h>
#include <stdlib.h>

#define ML 100
typedef int ElemType;
typedef struct List
{
    ElemType list[ML];
    int size;
} sqList;


sqList *createList(int n)//Create sequential list
{
    sqList *L;
    int i;
    L=(sqList *)malloc(sizeof(sqList));
    L->size=0;
    printf("Please input the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&(L->list[i]));
        L->size++;
    }
    return L;
}

void display(sqList *L)//Display the element in sequential list
{
    int i;
    for (i = 0; i < L->size; i++)
        printf("%d\t",L->list[i]);
    printf("\n");
}

int locateElem(sqList *L, ElemType x)//Locate the element x in the list
{
    int i=0;
    for (i=0; i<L->size; i++)
        if (L->list[i]==x) printf("The location of %d is %d",x,i);
    printf("\n");
    return 0;

}

int insert(sqList *L, int mark, ElemType x)
//Insert element x into list in the position mark
{
    int i=0;
    if(mark>L->size|| mark<0) return 0;
    else
    {
        for (i=L->size-1; i>=mark; i--)

            L->list[i+1]=L->list[i];

            L->list[i+1]=x;
            L->size++;
            return 1;
    }
}

int deleteElem(sqList *L, int item)//Delete element
{
    int i,j;
    for (i=0; i<L->size; i++)
        if (item==L->list[i]) break;
    for (j=i; j<L->size; j++)

        L->list[j-1]= L->list[j]; //Move elements
        L->size--; //Length of the list is minus by 1
        return 1;
}

void main()//Main function
{
    int p,q,r,i,x,num;
    sqList *head;

    printf("Please input the num of elements\n");
    scanf("%d",&num);

    //Create a sequential list with num elements，its head node pointer is head；
    printf("create list finished\n");
    head = createList(num);
    display(head);

   // printf("Please input insert location and element\t");
    //scanf("%d%d",&p,&q);
    //Insert q in position p
    //head,p,q
   // head = insert(&num,p,q);
   // display(head);

    printf("Please input the element to be deleted\t");
    scanf("%d",&r);
    //delete the element r
    head = deleteElem(head,r);
    display(head);

    display(head);

    printf("Please input the element to be located\t");
    scanf("%d",&x);

    locateElem(head,x);
    return;

}

