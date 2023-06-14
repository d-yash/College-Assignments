#include <stdio.h>

struct student
{
    char name[50];
    char subject[10];
    int marks;
}s[100];
int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the Name of student : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the Name of subject : ");
        scanf("%s",s[i].subject);
        printf("Enter the marks : ");
        scanf("%d",&s[i].marks);
    }
    for(int i=0; i<n; i++)
    {
        printf("\n%s",s[i].name);
        printf("\t%s",s[i].subject);
        printf("\t%d",s[i].marks);
    }
    return 0;
}