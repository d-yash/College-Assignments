#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,i=1,fact=1,sum=0;

    printf("Enter the n : ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
        sum+=fact;
    }
    printf("\nSum : %d",sum);
    return 0;
}
