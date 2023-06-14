#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,a[10],odd=0,even=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
   }
    printf("\nOdd Numbers : %d",odd);
    printf("\nEven Numbers : %d",even);
    return 0;
}
