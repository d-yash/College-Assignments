#include<stdio.h>
int fun(int );
int main(int argc, char const *argv[])
{
    int n,f;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    f=fun(n);
    printf("\nFactorial : %d",f);
    return 0;
}
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return n*fun(n-1);
}
