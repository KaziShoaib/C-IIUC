#include<stdio.h>

int main()
{
    float a[5], sum, average;
    int i;
    printf("input 5 elements : ");
    sum = 0;
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
        sum = sum + a[i];
    }
    average = sum / 5;
    printf("sum : %f\n",sum);
    printf("average : %f\n",average);
    return 0;

}
