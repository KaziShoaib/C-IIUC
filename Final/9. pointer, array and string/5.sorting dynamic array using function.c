#include<stdio.h>
#include<stdlib.h>

void my_sort(int *a, int n)
{
    int i, j, temp;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
}

int main()
{
    int *x, n, i;
    printf("how many numbers : ");
    scanf("%d",&n);
    x = malloc(sizeof(int)*n);
    printf("input %d numbers : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    my_sort(x,n);
    printf("after sorting : ");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    return 0;
}
