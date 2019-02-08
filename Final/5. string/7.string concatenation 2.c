#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80], str2[80];
    printf("input string 1 : ");
    gets(str1);
    printf("input string 2 : ");
    gets(str2);
    strcat(str1,str2);
    printf("after concatenation :\n");
    printf("string 1 is : %s\n",str1);
    printf("string 2 is : %s\n",str2);
    return 0;
}
