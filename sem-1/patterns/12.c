#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,a;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        a=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
