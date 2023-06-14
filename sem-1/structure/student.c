#include<stdio.h>

struct stud 
{
    int id;
    char sname[30];
    int total;
};
int main(int argc, char const *argv[])
{
    struct stud s1,s2;
    printf("\nEnter the id of student : ");
    scanf("%d",&s1.id);
    printf("\nEnter the name of student : ");
    fflush(stdin);
    gets(s1.sname);
    printf("\nEnter total marks : ");
    scanf("%d",&s1.total);
    //info of student 2
    printf("\nEnter the id of student : ");
    scanf("%d",&s2.id);
    printf("\nEnter the name of student : ");
    fflush(stdin);
    gets(s2.sname);
    printf("\nEnter total marks : ");
    scanf("%d",&s2.total);

    printf("\n\nStudent : %d %s %d",s1.id,s1.sname,s1.total);
    printf("\n\nStudent : %d %s %d",s2.id,s2.sname,s2.total);
    return 0;
}
