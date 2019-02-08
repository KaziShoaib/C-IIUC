#include<stdio.h>

int main()
{
    int a[2][3], i, j;
    printf("input a 2X3 matrix : \n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("printing matrix :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
