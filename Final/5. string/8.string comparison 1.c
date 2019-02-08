#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    char str1[80], str2[80], str3[80], str4[80];
    strcpy(str1,"dhaka");
    strcpy(str2,"chittagong");
    strcpy(str3,"sylhet");
    strcpy(str4,"dhaka");
    x = strcmp(str1,str2);
    printf("result of comparison between string 1 and string 2 : %d\n",x);
    x = strcmp(str2,str3);
    printf("result of comparison between string 2 and string 3 : %d\n",x);
    x = strcmp(str1,str4);
    printf("result of comparison between string 1 and string 4 : %d\n",x);
    return 0;
}
