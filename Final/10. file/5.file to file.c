#include<stdio.h>
int main()
{
    int a;
    double b;
    char str[100];

    FILE *fp1,*fp2;

    fp1 = fopen("file1.txt","r");
    fp2 = fopen("file2.txt","w");

    fscanf(fp1,"%d%lf%s",&a,&b,str);
    fprintf(fp2,"%d\n%lf\n%s\n",a,b,str);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
