#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=2,n,count=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    while(count<n)
    {
        printf("%d",i);
        printf(" ");
        i=i*i;  
        count++;  
    }
    return 0;
}
