#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int x;
    srand(time(NULL));
    x = rand()%100;
    printf("%d",x);

    return 0;
}
