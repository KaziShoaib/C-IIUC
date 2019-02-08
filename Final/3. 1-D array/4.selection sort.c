#include<stdio.h>

int main()
{
    int a[5], i, j, temp;
    printf("input 5 elements : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(a[j]<a[i])
            {
                temp =a[j];
                a[j] = a[i];
                a[i] = temp;
            }

    printf("after sorting : ");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    return 0;
}
