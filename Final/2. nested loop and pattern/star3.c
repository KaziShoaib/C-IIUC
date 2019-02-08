/*

n = 5

*****
****
***
**
*

*/

#include<stdio.h>

int main()
{
    int i,j,n,star,space;
    printf("input number: ");
    scanf("%d",&n);

    star=n;

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=star;j++)
            printf("*");
        star--;
        printf("\n");

    }

    return 0;
}
