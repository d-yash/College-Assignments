#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,rem,temp,i,sum=0,fact=1;

    printf("Enter the Number : ");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        fact=1;
        rem=temp%10;
        for(i=1;i<=rem;i++)
            fact=fact*i;
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
        printf("\n%d is Strong Number",n);
    else
        printf("\n%d is not Strong Number",n);
    
    return 0;
}
