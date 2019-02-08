#include<stdio.h>

int main()
{
    int x, d, r;
    printf("input a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        r = x%10;
        d = x/10;
        printf("%d",r);
        x = d;
    }
    return 0;
}
