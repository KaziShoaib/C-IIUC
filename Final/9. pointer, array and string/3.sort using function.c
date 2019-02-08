#include<stdio.h>

void sort(int *p, int n)
{
    int i, j, temp;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(p[j]<p[i])
            {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
}

int main()
{
    int a[5], i;
    printf("input 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sort(a, 5); //sort(&a[0]);
    printf("\nafter sorting : ");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
