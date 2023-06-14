#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n;

    printf("Enter the no. for rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
