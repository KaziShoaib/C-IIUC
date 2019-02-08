#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    char str1[80], str2[80];
    printf("input string 1 : ");
    gets(str1);
    printf("input string 2 : ");
    gets(str2);
    x = strcmp(str1,str2);
    if(x==0)
        printf("the strings are same");
    else if(x>0)
        printf("in dictionary string 1 comes after string 2");
    else if(x<0)
        printf("in dictionary string 1 comes before string 2");
    return 0;
}
