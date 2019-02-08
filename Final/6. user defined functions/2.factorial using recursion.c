#include<stdio.h>

int factorial(int x)
{
    int f;
    if(x==1)
        f = 1;
    else
        f = x * factorial(x-1);
    return f;
}

int main()
{
    int x, y;
    printf("input x : ");
    scanf("%d",&x);
    y = factorial(x);
    printf("factorial : %d",y);
    return 0;
}
