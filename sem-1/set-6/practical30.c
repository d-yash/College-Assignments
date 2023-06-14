#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,a[100],pos=0,neg=0,zero=0;

    printf("Howmany Numbers you want to Enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            pos++;
        if(a[i]<0)
            neg++;
        if(a[i]==0)
            zero++;
    }
    printf("\nTotal Positive Number : %d",pos);
    printf("\nTotal Negative Number : %d",neg);
    printf("\nTotal Zero : %d",zero);
    return 0;
}
