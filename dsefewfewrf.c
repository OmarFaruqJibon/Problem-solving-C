#include <stdio.h>
#include <stdlib.h>

struct ll
{
    char data;
    struct ll *next;
};

struct ll* create_ll(struct ll *start)
{
    struct ll *p1,*p2;
    char a;
    printf("Enter q to stop\n");
    printf("Enter data:");
    scanf(" %c",&a);
    while(a != 'q')
    {
        p1 = (struct ll*)malloc(sizeof(struct ll*));
        p1 -> data = a;
        if(start == NULL)
        {
            start = p1;
            p2 = p1;
            p1 -> next = NULL;
        }
        else
        {
            p2 -> next = p1;
            p1 -> next = NULL;
            p2 = p1;
        }
        printf("Enter data:");
        scanf(" %c",&a);;
    }
    return start;
}
