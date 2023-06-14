#include<stdio.h>

void add(int , int);         //function declaration

int main(int argc, char const *argv[])
{
    int a,b;

    printf("Enter a and b : ");
    scanf("%d%d",&a,&b);

    add(a,b);         //function call
    return 0;
}
void add(int x , int y)     //function def.
{
    int z;
    z=x+y;
    printf("\nAdd = %d",z);
}
