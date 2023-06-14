#include<stdio.h>

int add(int , int);         //function declaration

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
    
    c=add(a,b);    //function call
    printf("\nAdd = %d",c);
    return 0;
}
int add(int x , int y)      //function def.
{
    return (x+y);
}
