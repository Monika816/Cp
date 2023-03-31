#include<stdio.h>

float interest(int, int, int) ;

int main()
{
    float m;
    int a=700,b=300,c=187;
    m=interest(a,b,c) ;
    printf("simple interest%f",m);
    return 0;
}

float interest (int p, int r, int t)
{
    float si;
    si=p*r*t/100;
    return si;
}