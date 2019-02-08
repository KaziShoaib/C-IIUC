#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i;
    printf("input string 1 : ");
    gets(a);
    printf("input string 2 : ");
    gets(b);

    for(i=0;b[i]!='\0';i++)
        a[i]=b[i];
    a[i]=b[i];

    printf("after copying\n");
    printf("string 1 : %s\n",a);
    printf("string 2 : %s\n",b);


    return 0;
}

