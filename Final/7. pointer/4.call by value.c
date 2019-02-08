#include<stdio.h>

void f(int a)
{
    a = 10;
}

int main()
{
    int x = 99;
    printf("before function call %d\n",x);
    f(x);
    printf("after fucntion call %d\n",x);
    return 0;
}
