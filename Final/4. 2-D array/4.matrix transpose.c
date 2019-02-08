#include<stdio.h>

int main()
{
    int a[3][4], i, j;
    printf("input a 3X4 matrix : \n");
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    printf("printing transpose matrix :\n");
    for(j=0;j<4;j++)
    {
        for(i=0;i<3;i++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
