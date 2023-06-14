#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,i=2;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
            printf("%d ",i);
            
        i++;
    }
    return 0;
}
