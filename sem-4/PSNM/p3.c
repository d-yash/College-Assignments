#include <stdio.h>
#include <math.h>
#define ACU 0.001
#define f(x) x*x*x - 4*x + 1
//Regula falsi
int main()
{
    float x0, x1, x2, f0, f1, f2;
    do
    {
        printf("\nEnter the value of a : ");
        scanf("%f", &x0);
    } while (f(x0) > 0);
    do
    {
        printf("\nEnter the value of b : ");
        scanf("%f", &x1);
    } while (f(x1) < 0);
    do
    {
        f0 = f(x0);
        f1 = f(x1);

        x2 = ((x0*f1)-(x1*f0))/(f1 - f0);
        f2 = f(x2);

        if (f2 * f0 < 0)
            x1 = x2;
        else
            x0 = x2;
    } while (fabs(f2) > ACU);
    printf("\nRoot : %f", x2);
    return 0;
}