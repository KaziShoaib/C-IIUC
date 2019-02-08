#include<stdio.h>
int main()
{
    char a;
    int x;
    float p, q;

    a = 'U';
    x = 125;
    p = 10.25;
    q = 18.76;

    printf("%c is stored at %x\n",a, &a);
    printf("%d is stored at %x\n",x, &x);
    printf("%f is stored at %x\n",p, &p);
    printf("%f is stored at %x\n",q, &q);

    return 0;

}
