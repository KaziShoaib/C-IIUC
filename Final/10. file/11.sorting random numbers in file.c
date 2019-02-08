#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,j,t,x,a[10];
    FILE *fp;

    srand(time(NULL));

    fp = fopen("rand.txt","w");
    for(i=0;i<10;i++)
    {
    x = rand()%50;
    fprintf(fp,"%d\n",x);
    }

    fclose(fp);

    fp = fopen("rand.txt","r");

    for(i=0;i<10;i++)
    {
        fscanf(fp,"%d",&a[i]);

    }

    fclose(fp);

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;

            }
        }
    }
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);

    return 0;
}



