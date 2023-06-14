#include <stdio.h>
#include <string.h>

struct stud
{
    int marks;
    char name[50];
} s1;
int main()
{
    /*printf("\nEnter the marks : ");
    scanf("%d",s1.marks);
    printf("\nEnter the name of the student : ");
    gets(s1.name);*/
    s1.name = {'a','b','c'};

    printf("\nName : %s", s1.name);
    return 0;
}