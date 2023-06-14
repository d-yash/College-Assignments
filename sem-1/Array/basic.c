#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[10];

    printf("Enter the Numbers :- \n");
    for(i=0;i<=4;i++)
      scanf("%d",&a[i]);

    printf("Numbers are .....\n");
    for(i=4;i>=0;i--)
        printf("%d\n",a[i]);    
    return 0;
}
