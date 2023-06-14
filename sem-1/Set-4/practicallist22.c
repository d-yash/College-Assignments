#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,rem,rev=0,temp;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    n=temp;
    if(rev==temp)
        printf("\nNumber is Palindrome");
    else
            printf("\nNumber is not Palindrome");
    
    return 0;
}