#include<stdio.h>

int main()
{
    int a[5], i, max;
    printf("input 5 elements : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    max = a[0];
    for(i=0;i<5;i++)
        if(a[i]>max)
            max = a[i];
    printf("highest value : %d",max);
    return 0;
}
