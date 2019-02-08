#include<stdio.h>

int main()
{
    char str[100];
    int i, len;
    printf("input a string : ");
    gets(str);
    len = 0;
    for(i=0;str[i]!='\0';i++)
        len++;
    printf("length is : %d",len);
    return 0;
}
