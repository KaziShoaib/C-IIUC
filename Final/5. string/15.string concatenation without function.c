#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i, indx;
    printf("input string 1 : ");
    gets(a);
    printf("input string 2 : ");
    gets(b);

    indx = 0;
    for(i=0;a[i]!='\0';i++)
        ;
    indx = i;

    for(i=0;b[i]!='\0';i++)
    {
        a[indx] = b[i];
        indx++;
    }
    a[indx]='\0';

    printf("after concatenation\n");
    printf("string 1 : %s\n",a);
    printf("string 2 : %s\n",b);


    return 0;
}

