#include<stdio.h>

int total(int *p, int n)
{
    int sum = 0, i;
    for(i=0;i<n;i++)
        sum = sum + p[i];
    return sum;
}

int main()
{
    int a[5], i, result;
    printf("input 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    result = total(a,5); //total(&a[0],5);
    printf("sum of 5 numbers : %d",result);
    return 0;
}
