#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[10],n,sum=0,max,min;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {    
        max=a[0];
        min=a[0];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum=sum+a[i];
        printf("a[%d] : %d\n",i,a[i]);
    }
    printf("\nMax : %d",max);
    printf("\nMin : %d",min);
    printf("\nSum : %d",sum);
    printf("\nAverage : %f",(float)sum/n);
    return 0;
}
