#include<stdio.h>

int my_pow(int a, int b)
{
    int i, r;
    r = 1;
    for(i=1;i<=b;i++)
        r = r*a;
    return r;
}

int main()
{
    int x, y, z;
    printf("input base : ");
    scanf("%d",&x);
    printf("input power : ");
    scanf("%d",&y);
    z = my_pow(x,y);
    printf("%d to the power %d is %d",x,y,z);
    return 0;
}
