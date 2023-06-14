#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5][5],b[5][5],i,j,sum[5][5],r,c;

    printf("\nEnter the rows : ");
    scanf("%d",&r);
    printf("\nEnter the columns : ");
    scanf("%d",&c);

    printf("Enter the Elemets of first Matrix .....\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Elements of Second Matrix .....\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst Matrix is ...\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix is ...\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nSum of Two Matrix is ...\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
