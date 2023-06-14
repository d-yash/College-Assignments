#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,i,j,fact=1,sum=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact*=j;
        }
        sum+=fact;
    }
    printf("\nSum : %d",sum);
    return 0;
}
