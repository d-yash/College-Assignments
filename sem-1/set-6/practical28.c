#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,a[100],sum=0;

    printf("Howmany Numbers you want to Enter : ");
    scanf("%d",&n);

    printf("Enter the Numbers one by one \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];  
    }
    printf("Sum = %d",sum);
    printf("\nAverage = %f",(float)sum/n);
    return 0;
}
