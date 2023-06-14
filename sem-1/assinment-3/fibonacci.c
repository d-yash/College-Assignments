#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,t1=0,t2=1,t3;

    printf("Enter the limit  : ");
    scanf("%d",&n);

    printf("%d %d ",t1,t2);
    for(i=2;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d",t3);
        printf(" ");
        t1=t2;
        t2=t3;
    }
    
    return 0;
}