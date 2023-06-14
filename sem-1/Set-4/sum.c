#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    float x,final;

    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%f",&x);

    if(n!=0)
        final=(n*x*(n+1))/2;

    printf("\nSum of series is : %f",final);
    return 0;
}
