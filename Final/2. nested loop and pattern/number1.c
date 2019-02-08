/*
1
22
333
4444
55555

*/

#include<stdio.h>

int main()
{
    int i,j,n,num;
    scanf("%d",&n);
    num=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=num;j++)
            printf("%d",i);

        num++;
        printf("\n");

    }

    return 0;

}

