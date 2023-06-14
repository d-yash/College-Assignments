#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[100],min=0,max=0,n;

    printf("Howmany Numbers you want to Enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];     
    }
    printf("\nMax = %d\nMin = %d",max,min);   
    return 0;
}