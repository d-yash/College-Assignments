#include<stdio.h>

int add();         //function declaration

int main(int argc, char const *argv[])
{
    int c;

    c=add();     //function call
    printf("\nAdd = %d",c);
    return 0;
}
int add()
{
    int a,b,z;

    printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
    z=a+b;
    return z;
}
