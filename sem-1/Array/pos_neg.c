#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[10],pos=0,neg=0,zero=0,n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            zero++;
    }
    printf("\nPositive Numbers : %d",pos);
    printf("\nNegative Numbers : %d",neg);
    printf("\nZero : %d",zero);
    return 0;
}
