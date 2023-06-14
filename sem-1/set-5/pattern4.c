#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n;
    char c='a';

    printf("Enter the no. of n : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        
        for(j=1;j<=i;j++,c++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}
