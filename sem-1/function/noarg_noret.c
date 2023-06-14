#include<stdio.h>
void add();         //function declaration
int main(int argc, char const *argv[])
{
    add();      //function call
    return 0;
}
void add()      //function def.
{
    int a,b,c;

    printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nAdd = %d",c);
}
