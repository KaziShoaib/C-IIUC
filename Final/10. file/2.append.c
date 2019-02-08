#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("info.txt","a");
    fprintf(fp,"uvw");
    fclose(fp);

    return 0;
}

