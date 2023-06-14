#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,pos=0,neg=0,total=0,min=0,max=0,sum=0,avg=0;
    
    do
    {
        printf("Enter the number : ");
        scanf("%d",&n);
        total++;

        if(n>0)
            pos++;
        if(n<0)
            neg++;
        if(max<n)
            max=n;
        if(min>n)
            min=n;

        sum=sum+n;
    } while (n!=0);
    total=total-1;
    avg=sum/total;

    printf("\nTotal Positive Numbers : %d",pos);
    printf("\nTotal Negative Numbers : %d",neg);
    printf("\nMaximum Number : %d",max);
    printf("\nMinimum Number : %d",min);
    printf("\nTotal Entered Numbers : %d",total);
    printf("\nAverage : %f",(float)avg);

    return 0;
}
