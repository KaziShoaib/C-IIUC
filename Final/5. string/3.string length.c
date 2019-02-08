#include<stdio.h>

int main()
{
    char str[80];
    int l;
    printf("input a string : ");
    gets(str);
    l = strlen(str);
    printf("length of %s is %d",str,l);
    return 0;
}
