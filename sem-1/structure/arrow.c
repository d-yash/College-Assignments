#include<stdio.h>
struct stud
{
    int id,marks;
    char name[10];
};
int main(int argc, char const *argv[])
{
    struct stud s1;
    struct stud *ptr;
    ptr = &s1;
    (*ptr).id = 24;
    ptr->marks=120;
    ptr->name = "abc";
    
    printf("\nName : %s\tID : %d\tMarks = %d",s1.name,s1.id,s1.marks);
    return 0;
}
