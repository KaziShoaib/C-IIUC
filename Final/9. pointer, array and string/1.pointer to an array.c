#include<stdio.h>

int main()
{
    int a[5] = {12, 56, 8, 79, -13}, *p, i;
    printf("contents of array : ");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    p = a;
    //p = &a[0];
    printf("contents of array using pointer : ");
    for(i=0;i<5;i++)
       printf("%d ",p[i]);
    p[3] = 1111;
    printf("\n");
    printf("contents of array : ");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
