#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("letter.txt","r");
    fseek(fp,4,0);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fseek(fp,-5,2);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fseek(fp,-4,1);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fseek(fp,3,1);
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);

    fclose(fp);

    return 0;
}
