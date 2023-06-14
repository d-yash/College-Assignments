#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c,d,e,sum,Avg;

    printf("Enter a = ");
    scanf("%f",&a);

    printf("Enter b,c,d,e = ");
    scanf("%f%f%f%f",&b,&c,&d,&e);

    sum=a+b+c+d+e;
    printf("\n\nAddition of all is = %f",sum);

    Avg=sum/5;
    printf("\n\nAverage of all is = %f",Avg);
    return 0;
}
