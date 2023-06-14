#include<stdio.h>
#include<math.h>
// #define f(x) (x)*(x) - 4*(x) - 10
// #define f(x) (x)*(x)*(x) + (x)*(x) + (x) + 7
#define f(x) (x)*(x)*(x) - 4*(x) + 1 
// 0.2 - 0.3 Root : 0.254097
#define ACU 0.001
//Secant
int main(int argc, char const *argv[])
{
    int i = 0;
    float x0, x1, x2, f0, f1, f2, t;
    printf("Enter the value of x0 & x1 : ");    
    scanf("%f%f", &x0, &x1);
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        x2 = ((x0*f1) - (x1*f0))/(f1-f0);
        f2 = f(x2);
        printf("\ni:%d \tRoot : %f \tF(x):%f", i, x2, f2);
        x0 = x1;
        x1 = x2;
        i++;
    } while (fabs(f2) > ACU);
    return 0;
}
