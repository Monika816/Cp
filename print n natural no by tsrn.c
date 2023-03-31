#include<stdio.h>
void printN(int) ;
int main()
{
    int x=25;
    printN(x) ;
    return 0;
}

void printN(int n)
{
    int i;
    for(i=1; i<=n; i++)
        printf("%d",i);
}