#include<stdio.h>

int main()
{
    int n,i=1,fact=1;

    printf("\nEnter the Value of n : ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    printf("\n%d! = %d",n,fact);
    return 0;
}
