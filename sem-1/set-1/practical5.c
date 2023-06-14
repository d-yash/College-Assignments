#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,sum,sub,multi,division,modulus;

    printf("Enter the Numbers = ");
    scanf("%d%d",&a,&b);

    sum=a+b;
    printf("\nAddition of two numbers is = %d",sum);

    sub=a-b;
    printf("\nSubstraction of two numbers is = %d",sub);

    multi=a*b;
    printf("\nMultiplication of two numbers is = %d",multi);

    division=a/b;
    printf("\nDivision of two numbers is = %d",division);

    modulus=a%b;
    printf("\nModulus of two numbers is = %d",modulus);
    return 0;
}
