#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[10],n;

    for(i=0;i<=4;i++)
        a[i]=i+1;

    for(i=4;i>=0;i--)
        printf("a[%d] : %d\n",i,a[i]);    
    return 0;
}
