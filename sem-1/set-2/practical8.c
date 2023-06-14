#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Enter the first value = ");
    scanf("%d",&a);

    printf("Enter the second value = ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\nNew first value is = %d",a);
    printf("\nNew second value is = %d",b);
    
    return 0;
}
