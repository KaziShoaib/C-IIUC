#include<stdio.h>

void f();

int main()
{
    int i;
    for(i=1;i<=3;i++)
        f();
    return 0;
}

void f()
{
    static int x = 10;
    x = x + 10;
    printf("%d\n",x);
}
