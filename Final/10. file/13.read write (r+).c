#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("letter.txt","r+");
    fseek(fp,6,0);
    //fscanf(fp,"%c",'X');
    fprintf(fp,"%c",'X');

    fseek(fp,-7,2);
    //fscanf(fp,"%c",&ch);
    fprintf(fp,"%c",'X');

    fseek(fp,3,1);
    //fscanf(fp,"%c",&ch);
    fprintf(fp,"%c",'X');

    fseek(fp,-7,1);
    //fscanf(fp,"%c",&ch);
    fprintf(fp,"%c",'X');

    fclose(fp);

    return 0;
}

