#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n;

    printf("Enter the no. rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
