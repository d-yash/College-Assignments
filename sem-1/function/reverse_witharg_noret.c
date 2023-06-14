#include<stdio.h>
void rev();
int main(int argc, char const *argv[])
{
    int n;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    rev(n);
    return 0;
}
void rev(int x)
{
    int rem,rev=0;

    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    printf("\nReversed number is : %d",rev);
}
