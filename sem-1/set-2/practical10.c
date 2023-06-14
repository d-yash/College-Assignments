#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, max;

    printf("Enter a & b : ");
    scanf("%d%d", &a, &b);

    (a > b) ? printf("%d is maximum", a) : printf("\n%d is maximum", b);
    (a < b) ? printf("\n%d is Minimum", a) : printf("\n%d is minimum", b);

    // max = (a>b)? a : b;
    // printf("Maximum number is : %d",max);
    return 0;
}
