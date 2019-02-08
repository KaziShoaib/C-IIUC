#include<stdio.h>

void bin(int x)
{
    int r, d;
    r = x%2;
    d = x/2;
    if(d!=0)
        bin(d);
    printf("%d",r);
}

int main()
{
    int dec;
    printf("input decimal : ");
    scanf("%d",&dec);
    printf("in binary : ");
    bin(dec);
    return 0;
}
