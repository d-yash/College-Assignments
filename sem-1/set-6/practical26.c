#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=0,a[10];

    printf("Nmbers are ....\n");
    for(i=0;i<=4;i++)
    {    
        a[i]=i+1;
        printf("%d\n",a[i]);
    }

    return 0;
}
