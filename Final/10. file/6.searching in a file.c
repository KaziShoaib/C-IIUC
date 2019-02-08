#include<stdio.h>
#include<string.h>
int main()
{
    char r[100],n[100],id[100];
    double cg;
    FILE *fp;
    printf("input an id: \n");
    scanf("%s",id);

    fp = fopen("student.txt","r");

    while(!feof(fp))
    {

        fscanf(fp,"%s",r);
        fscanf(fp,"%s",n);
        fscanf(fp,"%lf",&cg);

        if(strcmp(r,id)==0)
        {
            printf("name: %s\n",n);
            printf("cgpa: %lf\n",cg);

        }
    }

    fclose(fp);
    return 0;
}
