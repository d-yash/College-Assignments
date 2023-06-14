#include<stdio.h>
void data(int );
void print(int );

struct employee
{
    char name[50];
    int salary;
}s1[100];
int main(int argc, char const *argv[])
{
    int n;
    printf("\nEnter the number of employee : ");
    scanf("%d",&n);
    data(n);
    print(n);
    return 0;
}
void data(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Name of Employee : ");
        fflush(stdin);
        gets(s1[i].name);
        printf("\nEnter the salary of Employee : ");
        scanf("%d",&s1[i].salary);
    }
}
void print(int n)
{
    int i;
    printf("\n\nName\t\tSalary");
    for(i=0;i<n;i++)
        printf("\n%s\t\t%d",s1[i].name,s1[i].salary);
}
