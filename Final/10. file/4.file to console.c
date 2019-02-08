#include<stdio.h>
int main()
{
    int a;
    double b;
    char str[100];

    FILE *fp;
    fp = fopen("a.txt","r");
    fscanf(fp,"%d%lf%s",&a,&b,str);
    printf("%d\n%lf\n%s\n",a,b,str);
    fclose(fp);

    return 0;
}
