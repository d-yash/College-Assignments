#include<stdio.h>
void avg();
int main(int argc, char const *argv[])
{
    avg();
    return 0;
}
void avg()
{
    int n,avg;

    printf("\nEnter the value of n : ");
    scanf("%d",&n);

    avg=(n*(n+1)/2)/n;
    printf("\nAverage of first %d numbers is %d",n,avg);
}

