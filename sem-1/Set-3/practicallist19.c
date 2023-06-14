#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1,n,sum=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    if(n<1)
    {
        goto end;
    }
    start:

    sum+=i;
    i++;

    if(i<=n)
    {
        goto start;
    }
    printf("\nAddition of first %d Numbers = %d",n,sum);
    end:

    return 0;
}
