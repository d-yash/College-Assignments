#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n;
    char c='A';

    printf("Enter the no. of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
