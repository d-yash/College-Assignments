#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter the Year : ");
    scanf("%d",&year);

    if(year%400==0 || (year%100!=0 && year%4==0))
        printf("\n%d is a leap Year",year);
    else
        printf("\n%d is not a Leap Year",year);
    
    return 0;
}
