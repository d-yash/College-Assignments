#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char name[50];
}u1;
int main(int argc, char const *argv[])
{
    //strcpy(u1.name,"abc_xyz");
    //u1.marks = 112;
    //u1.id = 50;

    union student u1 = {112,50,"abc"};

    printf("\nId : %d",u1.id);
    printf("\nMarks : %d",u1.marks);
    printf("\nName : %s",u1.name);
    return 0;
}
