#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,k;

    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++)
    {
        for(k=n-i;k>=1;k--)
            printf(" ");
        for(j=n;j>=n-i;j--)
            printf("%d ",j);

        printf("\n");    
    }
    return 0;
}
