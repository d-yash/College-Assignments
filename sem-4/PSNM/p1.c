#include<stdio.h>
#include<math.h>
//Qaudretic Equation    
int main()
{
    int a, b, c;
    float x, y, d;
    printf("Enter the value of a, b and c : ");
    scanf("%d%d%d", &a, &b, &c);
    d = (b*b) - (4*a*c);

    if(d < 0)
    {
        printf("\nReal Root not exist");
    }
    else if(d == 0)
    {
        printf("\nBoth Root are equal");
        x = (-b + sqrt(d)) / 2.0*a;
        printf("X root : %f", x);   
    }
    else
    {
        printf("\nTwo distinct Root exist");
        x = (-b + sqrt(d)) / 2.0*a;
        y = (-b - sqrt(d)) / 2.0*a;
        printf("\nX root : %f", x);
        printf("\nY root : %f", y);
    }
    return 0;
}


// #include<stdio.h>
// #include<math.h>

// int main(int argc, char const *argv[])
// {
//     float a, b, c, d, x, y;
//     printf("Enter the value of a, b & c : ");
//     scanf("%f%f%f", &a, &b, &c);

//     d = (b*b) - 4*a*c;
//     if(d < 0)
//     {
//         printf("\nReal root not exist.");
//     } 
//     else if(d == 0)
//     {
//         printf("\nBoth root are equal.");
//         x = (-b + sqrt(d)) / 2.0*a;
//         printf("\nRoot : %f", x);
//     }
//     else
//     {
//         printf("\nTwo distinct root exist.");
//         x = (-b + sqrt(d)) / 2.0*a;
//         y = (-b - sqrt(d)) / 2.0  *a;
//         printf("\nRoots : %f  &  %f", x, y);
//     }
//     return 0;
// }
