#include<stdio.h>

int main()
{
    int x, y, r, a, b, lcm, gcd;
    printf("input two numbers : ");
    scanf("%d%d",&a,&b);
    x = a;
    y = b;
    while(x%y!=0)
    {
        r = x%y;
        x = y;
        y = r;
    }
    gcd = y;
    printf("gcd : %d\n",gcd);
    lcm = (a*b)/gcd;
    printf("lcm : %d",lcm);
    return 0;

}
