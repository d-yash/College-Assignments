#include<stdio.h>
#include<math.h>
#define ACU 0.001
#define F(x) (x)*(x)*(x) + (x)*(x) + (x) + 7
//Bisection
int main()
{
    float a, b, c, f0, f1, f2;
    int i=0;
    printf("Enter the value of a & b : ");    
    scanf("%f%f", &a, &b);
    do
    {
        c = (a+b) / 2;
        f0 = F(a);
        f1 = F(b);
        f2 = F(c);

        printf("\ni=%d \ta=%f \tb=%f \tc=%f F(a)=%f F(b)=%f F(c)=%f", i, a, b, c, f0, f1, f2);
        
        if(f0*f2 < 0)
            b = c;
        else
            a = c; 
        i++;
    } while (fabs(f2) > ACU);

    printf("\n\nRoot : %f", c);
    return 0;
}


// #include <stdio.h>
// #include<math.h>
// #define f(x) (x)*(x)*(x) + (x)*(x) + (x) + 7
// #define ACU 0.001

// int main()
// {
//     float a, b, c, f0, f1, f2;
//     printf("\nEnter the value of a & b : ");
//     scanf("%f%f", &a, &b);

//     do
//     {
//         c = (a+b) / 2;
//         f0 = f(a);
//         f1 = f(b);
//         f2 = f(c);
//         if(f0*f2 < 0)
//             b = c;
//         else
//             a = c;
//     } while (fabs(f2) > ACU);
    
//     return 0;
// }

