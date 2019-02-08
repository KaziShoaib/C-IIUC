#include<stdio.h>

struct student
{
    char id[100], name[100];
    double cgpa;
};

int main()
{
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("input id, name and cgpa of  student %d: ",i);
        scanf("%s%s%lf",s[i].id,s[i].name,&s[i].cgpa);
    }

    for(i=0;i<3;i++)
    {
        printf("printing information of student %d\n",i);
        printf("id : %s\n",s[i].id);
        printf("name : %s\n",s[i].name);
        printf("cgpa : %lf\n",s[i].cgpa);
        printf("\n\n");
    }
    return 0;
}
