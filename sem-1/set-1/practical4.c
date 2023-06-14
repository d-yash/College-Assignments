#include<stdio.h>

int main(int argc, char const *argv[])
{
    long int year;
    long int min;

    printf("Enter the no. of years = ");
    scanf("%ld",&year);

    min=year*365*24*60;
    printf("\nNo. of years is = %ld minutes",min);

    return 0;
}
