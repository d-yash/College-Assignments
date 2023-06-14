#include<stdio.h>
int fun(int );
int main(int argc, char const *argv[])
{
    int n,sum;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    sum=fun(n);
    printf("\nSum is : %d",sum);
    return 0;
}
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return n+fun(n-1);
}
