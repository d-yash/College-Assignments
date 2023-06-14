#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,sum=0,rem;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("\nSum of digits : %d",sum);


    return 0;
}
