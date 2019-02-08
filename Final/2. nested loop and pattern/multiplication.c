#include<stdio.h>

int main()
{
    int i,j,x,row,column;
    printf("input row : ");
    scanf("%d",&row);
    printf("input column : ");
    scanf("%d",&column);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            x = i*j;
            printf("%5d", x);
        }
        printf("\n");
    }

    return 0;
}
