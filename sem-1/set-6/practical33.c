#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,a[5][5],r,c;

    printf("\nEnter the value of Rows : ");
    scanf("%d",&r);
    printf("\nEnter the value of Columns : ");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is as below .....\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Matrix is as below .....\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
