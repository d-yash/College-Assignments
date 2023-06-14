#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,*pn;          
    pn=&n;
    printf("\nEnter the value of n : ");
    scanf("%d",pn);
    printf("\nValue of n is : %d",*pn);
    printf("\n ADD : %d",pn);
    return 0;
}
