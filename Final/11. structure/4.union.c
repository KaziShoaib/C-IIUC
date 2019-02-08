#include<stdio.h>

union data
{
    int a, b;
};

int main()
{
    union data k;
    k.a = 100;
    k.b = 30;
    printf("%d",k.a);
    return 0;
}
