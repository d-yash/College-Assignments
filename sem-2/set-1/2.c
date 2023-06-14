#include <stdio.h>
void printData(int );void getData(int );
//To create an employee structure having name and salary. Functions with structure

struct employee
{
    char name[50];
    int salary;
}s[100];
void printData(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%s",s[i].name);
        printf("\t%d",s[i].salary);
    }
}
void getData(int n)         //return_datatype name(arr)
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the name of the Employee : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the salray of the Employee : ");
        scanf("%d",&s[i].salary);
    }
}
int main()
{
    int n;
    printf("\nEnter the number of the Employee : ");
    scanf("%d",&n);

    getData(n);
    printData(n);
    return 0;
}
