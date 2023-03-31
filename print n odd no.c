#include<stdio.h>
void print_odd(int) ;
int main()
{
    int x=25;
    print_odd(x) ;
    return 0;
}

void print_odd(int n)
{
    int i;
    for(i=1; i<=n; i++)
        printf("%d\n",2*i-1);
}