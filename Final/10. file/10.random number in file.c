#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,x;
    FILE *fp;

    srand(time(NULL));

    fp = fopen("rand.txt","w");
    for(i=0;i<10;i++)
    {
    x = rand()%50;
    fprintf(fp,"%d\n",x);
    }

    fclose(fp);

    return 0;
}


