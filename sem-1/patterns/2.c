#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,i,j;

    printf("Enter the no. row : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)

        printf("*");

        printf("\n");
    }
    return 0;
}
