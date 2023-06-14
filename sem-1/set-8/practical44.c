#include<stdio.h>
struct emp
{
    int id;
    char name[50];
    struct sal
    {
        int salary;
    }sal;
}emp[100];

int main(int argc, char const *argv[])
{
    int i,n;

    printf("\nEnter the number of employee : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the ID of employee : ");
        scanf("%d",&emp[i].id);
        printf("\nEnter the Name of the employee : ");
        fflush(stdin);
        gets(emp[i].name);
        printf("\nEnter the salary of employee : ");
        scanf("%d",&emp[i].sal.salary);
    }    
    for(i=0;i<n;i++)
        printf("\nID:%d\tName:%s\tSalary:%d",emp[i].id,emp[i].name,emp[i].sal.salary);
    return 0;
}
