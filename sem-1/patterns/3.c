#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,k;

    printf("Enter the no. of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf(" *");

        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf(" *");

        printf("\n");
    }
    return 0;
}
