#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,rem,sum=0,temp,digit=0;

    printf("Enter the Number : ");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        digit++;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        rem=n%10;
        sum+=pow(rem,digit);
        n=n/10;
    }
    if(sum==temp)
        printf("\n\n%d is Armstrong Number",temp);
    else
        printf("\n\n%d is not a Armstrong Number",temp);
    return 0;
}
