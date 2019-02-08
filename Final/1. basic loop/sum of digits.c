#include<stdio.h>

int main()
{
    int x, d, r, sum = 0;
    printf("input a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        r = x%10;
        d = x/10;
        sum = sum + r;
        x = d;
    }
    printf("sum of digits : %d",sum);
    return 0;
}
