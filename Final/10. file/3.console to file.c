#include<stdio.h>
int main()
{
    int a;
    double d;
    char str[100];
    FILE *fp;
    scanf("%d%lf%s",&a,&d,str);

    fp = fopen("test.txt","w");
    fprintf(fp,"%d\n%lf\n%s\n",a,d,str);
    fclose(fp);

    return 0;
}
