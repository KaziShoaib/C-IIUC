#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("info.txt","w");
    fprintf(fp,"xyz");
    fclose(fp);

    return 0;
}
