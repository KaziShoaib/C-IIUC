#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("input a string : ");
    gets(str);
    strrev(str);
    printf("after reversing : ");
    printf("%s",str);
    return 0;
}
