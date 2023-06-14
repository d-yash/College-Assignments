#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,n;
    char c;

    printf("Enter the no of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        c='a';
        for(k=n-i;k>0;k--)
            printf(" ");
        for(j=i;j>=1;j--,c++)
            printf("%c ",c);

        printf("\n");
    }

    return 0;
}
