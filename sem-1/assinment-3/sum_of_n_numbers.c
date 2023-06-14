#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,sum=0,i=1;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        printf("%d",i);
        printf(" ");
        i++;
    }

    printf("\n\nSum = %d",sum);
    return 0;
}
