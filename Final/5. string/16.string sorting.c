#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][100], temp[100];
    int i, j;

    printf("input 5 strings:\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
            if(strcmp(str[j],str[i])<0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[i]);
                strcpy(str[i],temp);
            }
    }

    printf("after sorting\n");
    for(i=0;i<5;i++)
        printf("%s\n",str[i]);
    return 0;
}
