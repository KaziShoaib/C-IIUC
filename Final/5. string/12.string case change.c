#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i, len;
    printf("input a string : ");
    gets(str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        else if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
    printf("after case conversion : %s",str);
    return 0;
}
