#include<stdio.h>

int main(int argc, char const *argv[])
{
    float r,Area_circle,pi=3.14,l,b,Area_rectangle;
    printf("Enter r = ");
    scanf("%f",&r);
    
    Area_circle=pi*r*r;
    printf("\n\nArea of circle = %f",Area_circle);

    printf("\n\nEnter l = ");
    scanf("%f",&l);

    printf("\n\nEnter b = ");
    scanf("%f",&b);

    Area_rectangle=l*b;
    printf("\nArea of REctangle = %f",Area_rectangle);

    return 0;
}
