#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, n, i;
    printf("input size of the array : ");
    scanf("%d",&n);
    a = malloc((sizeof(int))*n);
    printf("input %d numbers : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("contents of the array : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
