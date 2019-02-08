#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    printf("input a string : ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);

    if(strcmp(str1,str2)==0)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}
