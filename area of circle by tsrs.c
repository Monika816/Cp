#include<stdio.h>

float area(int) ;

int main()
{
    float m;
    int r=6;
    m=area(r) ;
    printf("area of circle%f",m);
    return 0;
}

float area(int a)
{
    float b;
    b=3.14*a*a;
    return b;
}