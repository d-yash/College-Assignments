#include<stdio.h>

int main()
{
    int n,flag=0,i;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("\n%d is Prime Number",n);
    else
        printf("\n%d is not Prime Number",n);
    
    return 0;
}
