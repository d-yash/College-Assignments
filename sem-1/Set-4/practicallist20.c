#include <stdio.h>

int main()
{
    int n,rem,rev=0;

    printf("\nEnter the Number : ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
   
    printf("\nReverse Number is %d",rev);

    return 0;
}
