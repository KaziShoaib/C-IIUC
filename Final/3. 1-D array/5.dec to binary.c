#include<stdio.h>

int main()
{
    int dec, bin, x, r, indx, i, d, a[50];
    printf("input a number in decimal : ");
    scanf("%d",&dec);
    x = dec;
    indx = -1;
    while(x!=0)
    {
        r = x%2;
        d = x/2;
        ++indx;
        a[indx] = r;
        x = d;
    }
    printf("binary : ");
    for(i=indx;i>=0;i--)
        printf("%d",a[i]);
    return 0;
}
