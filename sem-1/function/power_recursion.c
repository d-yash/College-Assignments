#include<stdio.h>

int fun(int n, int j);

int main(int argc, char const *argv[])
{
    int n,j,f;

    printf("Enter the base : ");
    scanf("%d",&n);
    printf("\nEnter the power : ");
    scanf("%d",&j);
    f=fun(n,j);
    printf("\nFinal answer is : %d",f);
    return 0;
}
int fun(int n,int j)
{
    if(j==1)
        return n;
    else
        return n*fun(n,j-1);
}
