#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "list.h"

Lnode * create(int n)//Create a linked list with n elements，the data type of the element is int.
{
    Lnode *head,*p,*q;
    int i;
    head=(Lnode *)malloc(sizeof(Lnode));//generate the head node
    head->next=NULL;
    q=head;
    for (i=0; i<n; i++)
    {
        p = (Lnode *)malloc(sizeof(Lnode)); //generate new node
        scanf("%d",&p->data);
        q->next=p;
        p->next=NULL;
        q=p;
    }
    return head;
}

int length(Lnode *L)//get the length of the list
{
    Lnode *p;
    p=L;
    int size=0;
    while(p->next!=NULL)
    {
        ;//Move pointer
        ;//Length add by 1
    }
    return size;
}

Lnode *get(Lnode *L, int i)//find the ith element, return its pointer.
{
    Lnode *p;
    int j;
    p=L;
    j=0;
    while(p->next!=NULL&&j<i)
    {
        j++;
        p=p->next;
    }
    if (i==j) return p;
    else
        return NULL;
}

int insert(Lnode *L, int i, ElemType x)//insert an new element x before the ith element
{
    Lnode *p,*q;
    int j=0;
    j=i-1;
    if ((p=get(L, j))==NULL)
    {
        printf("Insertion location invalid\n");
        return 0;
    }
    else
    {
        q=(Lnode *)malloc(sizeof(Lnode));
        q -> data = x;
        q->next = p-> next;// read the value x
        p -> next = q;//change the pointer and implement the insert operation
        return 1;
    }
}

Lnode *locate(Lnode *L, ElemType x)//Find the element valued x, return its pointer.
{
    Lnode *p;
    p=L->next;
    while(p!=NULL)
        ;//if p points to a node valued x, end the loop.
    else
        p=p->next;
    return p;
}

int deleteElem(Lnode *L, ElemType x)//delete the element with value x
{
    Lnode *p, *q;
    q=L;
    p = L->next;
    while(p!=NULL){
        if(p->data ==x){
            q -> next = p->next;
            free(p);
            break;
        }else{
            q=q->next;
            p=p->next;
        }
    }
    return 1;

}

void display(Lnode *L)//display elements in the list
{
    Lnode *p;
    p=L->next;
    while (p!=NULL)//when the linked list is NOT NULL
    {
        printf("%d\t",p->data);
        P = P->next;//point to the next node
    }
    printf("\n");
    return;
}

Lnode *merge(Lnode *La, Lnode *Lb, Lnode *Lc)//Merge two ordered linked list as one ordered linked list
{
    Lnode *p, *q, *r;
    p = La -> next;
    q = Lb-> next;
    Lc -> next = NULL;
    r = Lc;
    while(p!=NULL && q!=NULL)
    {
        if(p->data<=q->data)
        {
            r -> next = p;
            r = p;
            p = p-> next;
        }
        else
        {
            r->next=q;
            r=q;
            q=q->next;
        }
    }
    if(p!=NULL)
        r->next=p;
    if(q!=NULL)
        r->next=q;
    free(Lb);
    return Lc;

}
void main()
{
    Lnode *L, *La,*Lb, *Lc;
    int num=0;
    int mark, size;
    ElemType a;
    ElemType x;
    printf("Please input the num of elements\n");
    scanf("%d",&num);

    printf("Please input the elements to establish a linked list\n");
    ;//call the function of create the list，the pointer of the list is L；
    printf("The list stored in linked form is\n");

    ;//display elements in the list；
    printf("Please input the location and element to be inserted\n");
    scanf("%d%d",&mark,&x);
    insert(L, mark, x);
    display(L);
    ;//call the function length, calculate the length of L, and give to size。

    printf("The size of the linked list is %d\n",size);

    printf("Please input the element to be deleted\n");
    scanf("%d",&a);
    deleteElem(L,a);//call the delete function, delete a node valued a from the list L.
    display(L);

    printf("Please input 2 ordered list\n");
    La=create(num);
    Lb=create(num);
    Lc=merge(La,Lb,Lc);
    display(Lc);//display the merged list
    return;
}

