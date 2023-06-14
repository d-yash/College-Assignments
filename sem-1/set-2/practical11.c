#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c=1;

    printf("Enter the values for a and b : ");
    scanf("%d%d",&a,&b);

    printf("%d & %d = %d",a,b,a&b);
    printf("\n%d | %d = %d",a,b,a|b);
    printf("\n%d ^ %d = %d",a,b,a^b);
    printf("\nShift right = %d",b>>c);
    printf("\nShift left = %d",b<<c);
    printf("\n~%d = %d",a,~a);
    printf("\n~%d = %d",b,~b);
    return 0;
}
