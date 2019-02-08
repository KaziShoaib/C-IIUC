#include<stdio.h>

int main()
{
    int a[10], i;
    printf("input 10 elements : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("printing the elements :");
    for(i=0;i<10;i++)
        printf(" %d",a[i]);
    return 0;
}
