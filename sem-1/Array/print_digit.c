#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[10],n;

    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the digit you want see : ");
    scanf("%d",&n);

    printf("\n%dth digit is : %d",n,a[n]);
    return 0;
}
