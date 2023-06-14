#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,j,power;

    printf("\nEnter the base : ");
    scanf("%d",&n);
    printf("\nEnter the power : ");
    scanf("%d",&j);
    power=pow1(n,j);
    printf("\nPower : %d",power);
    return 0;
}
int pow1(int n , int j)
{
    if(j==1)
        return n;
    else    
        return n*pow1(n,j-1);
}
