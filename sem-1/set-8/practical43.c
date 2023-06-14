#include<stdio.h>

struct student
{
    int roll,mark;
    char name[50];
};
int main(int argc, char const *argv[])
{
    int i,n,m=0,j;
    struct student s1[120];
    printf("\nEnter the number of students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll no : ");
        scanf("%d",&s1[i].roll);
        printf("\nEnter the Name of student : ");
        fflush(stdin);
        gets(s1[i].name);
        printf("\nEnter the total marks of student : ");
        scanf("%d",&s1[i].mark);

        if(s1[i].mark>=m)
        {
            j=i+1;
            m=s1[i].mark;
        }
    }

    printf("\nHighest mark scorer is .....");
    printf("\nRoll no:%d\tName:%s\tmarks:%d",j,s1[j-1].name,m);
    return 0;
}
