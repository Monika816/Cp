#include<stdio.h>
int fact(int) ;
int main()
{
    int k, x=5;
    k= fact(x) ;
    printf("factorial is%d",k);
    return 0;
}

int fact(int n)
{
    int f=1;
    while(n)

    {   f=f*n;
        n--;
    }
    return f;

}