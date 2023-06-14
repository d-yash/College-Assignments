#include<stdio.h>
void sum();
int main(int argc, char const *argv[])
{
    sum();
    return 0;
}
void sum()
{
    int n,sum;

    printf("\nEnter the value of n : ");
    scanf("%d",&n);

    sum=(n*(n+1)/2);

    printf("\nSum of first %d numbers is %d",n,sum);
}
