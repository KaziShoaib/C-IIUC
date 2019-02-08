#include<stdio.h>

struct student
{
    char id[100], name[100];
    double cgpa;
};

int main()
{
    struct student s;
    printf("input id, name and cgpa of a student : ");
    scanf("%s%s%lf",s.id,s.name,&s.cgpa);
    printf("id : %s\n",s.id);
    printf("name : %s\n",s.name);
    printf("cgpa : %lf\n",s.cgpa);
    return 0;
}
