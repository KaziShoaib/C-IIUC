#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    printf("input a line: \n");
    gets(str);

    fp = fopen("test.txt","w");
    fprintf(fp,"%s",str);
    fclose(fp);

    fp = fopen("test.txt","r");
    fgets(str,100,fp);
    printf("reading from file: \n");
    printf("%s",str);

    return 0;
}
