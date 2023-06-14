#include<stdio.h>
void odd_even();
int main(int argc, char const *argv[])
{
    odd_even();
    return 0;
}
void odd_even()
{
    int n;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    if(n%2==0)
        printf("\n%d is Even",n);
    else
        printf("\n%d is Odd",n);
}
