#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,k,l;

    printf("Enter the row : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
        printf("");
    for(j=1;j<=i;j++)
        printf("%d",j);
    for(l=j-2;l>=1;l--)
    {
           printf("%d",l);
    }
    printf("\n");
    return 0;
}
