#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,a[100],even=0,odd=0;

    printf("Howmany Numbers you want to enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the Element of Array : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else    
            odd++;
    }
    printf("\nTotal Even Numbers : %d",even);
    printf("\nTotal Odd Numbers : %d",odd);
    return 0;
}
