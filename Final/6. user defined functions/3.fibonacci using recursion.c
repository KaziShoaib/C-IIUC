#include<stdio.h>

int fib(int n)
{
    int res;
    if(n==1||n==2)
        res=1;
    else
        res = fib(n-1)+fib(n-2);
    return res;
}

int main()
{
    int x, y;
    printf("which fibonacci number : ");
    scanf("%d",&x);
    y = fib(x);
    printf("%d fibonacci number is : %d",x,y);
    return 0;
}
