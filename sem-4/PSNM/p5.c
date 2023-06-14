#include <stdio.h>
#include <math.h>
// #define f(x) (x) * (x) * (x)-4 * (x) + 1
// #define df(x) 3 * x *x - 4
#define ACU 0.001
#define f(x) (x)*(x)*(x) - (x) - 1
#define df(x) 3*x*x - 1
//Newton raphson
int main()
{
    int i = 0;
    float x0, x1, f1, f0, df0;
    printf("Enter the value of x0 : ");
    scanf("%f", &x0);
    do
    {
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - (f0 / df0);
        f1 = f(x1);
        x0 = x1;
        printf("\ni:%d \tRoot : %f \tF(x):%f", i, x1, f1);
        i++;
    } while (fabs(f1) > ACU);

    return 0;
}