#include<stdio.h>

int gcd(int a, int b)
{
    int e;
    if(a%b==0)
        e=b;
    else
        e = gcd(b,a%b);
    return e;
}

int main()
{
    int x, y, g;
    printf("input two numbers : ");
    scanf("%d%d",&x,&y);
    g = gcd(x,y);
    printf("gcd is %d",g);
    return 0;
}
