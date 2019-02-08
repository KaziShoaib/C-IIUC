#include<stdio.h>

void arithmetic(int a, int b, int *p1, int *p2, int *p3, int *p4)
{
    *p1 = a + b;
    *p2 = a - b;
    *p3 = a * b;
    *p4 = a / b;
}

int main()
{
    int x, y, sum, sub, mult, div;
    printf("input 2 numbers : ");
    scanf("%d%d",&x,&y);
    arithmetic(x,y,&sum,&sub,&mult,&div);
    printf("result of addition : %d\n",sum);
    printf("result of subtraction : %d\n",sub);
    printf("result of multiplication : %d\n",mult);
    printf("result of division : %d",div);
    return 0;
}
