#include<stdio.h>

int main()
{
    int a[2][3], i, j, row_sum[2]={0}, col_sum[3]={0};
    printf("input a 2X3 matrix : \n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        {
            row_sum[i] = row_sum[i] + a[i][j];
            col_sum[j] = col_sum[j] + a[i][j];
        }

    printf("row sums : ");
    for(i=0;i<2;i++)
        printf("%d ",row_sum[i]);
    printf("\n");

    printf("column sums : ");
    for(j=0;j<3;j++)
        printf("%d ",col_sum[j]);
    printf("\n");

    return 0;
}
