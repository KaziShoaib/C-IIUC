#include<stdio.h>

int x;

void f1();
void f2();
void f3();

int main()
{
    x = 10;
    printf("%d\n",x);
    f1();
    printf("%d\n",x);
    f2();
    printf("%d\n",x);
    f3();
    printf("%d\n",x);
    return 0;
}

void f1()
{
    x = x+10;
}

void f2()
{
    int x;
    x = 1;
}

void f3()
{
    x = x + 10;
}
