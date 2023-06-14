#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c;

    printf("\nEnter 3 numbers : ");
    scanf("%f%f%f",&a,&b,&c);

    if(a>b)
    {
        if(c>a)
            printf("\n\n%f is Maximum",c);
        else
                printf("\n\n%f is Maximum",a);
    }
    else
    {
        if(b>c)
            printf("\n\n%f is Maximum",b);
        else
            printf("\n\n%f is Maximum",c);
    }
    

    return 0;
}
