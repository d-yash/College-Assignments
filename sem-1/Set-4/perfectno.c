#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,i,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    if(sum==n)
        printf("\n%d is Perfect Number",n);
    else
        printf("\n%d is not a Perfect Number",n);
    
    return 0;
}
