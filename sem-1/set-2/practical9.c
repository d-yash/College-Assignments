#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;

    printf("Enter the first value = ");
    scanf("%d",&a);

    printf("Enter the second value = ");
    scanf("%d",&b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("\nNew first value is = %d",a);
    printf("\nNew second value is = %d",b);
    return 0;
}
