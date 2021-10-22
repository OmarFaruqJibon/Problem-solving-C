#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};


int main()
{
    Node *a;
    Node *b;
    Node *c;
    Node *head[100];

    a = (Node*)malloc(sizeof(Node));
    b = (Node*)malloc(sizeof(Node));
    c = (Node*)malloc(sizeof(Node));

    a->data = 10;
    a->next = b;

    b->data = 20;
    b->next = c;

    c->data = 30;
    c->next = NULL;

    int n,i,count=0;
    printf("Please enter the size of the list: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        count++;
        scanf("%d",head->data);
    }



    while(a != NULL)
    {
        printf("Value : %d \t Address : %d \n",a->data,a->next);
        a = a-> next;
    }
    printf("%d\n",b);


    return 0;
}
