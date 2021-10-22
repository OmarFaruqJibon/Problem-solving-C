#include<stdio.h>
int main()
{
    char l[500];
    gets(l);
    if(strlen(l)<=80) printf("YES\n");
    else printf("NO\n");
    return 0;
}
