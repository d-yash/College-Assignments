#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,k;

    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>=1;k--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);

        printf("\n");
    }
    return 0;
}
