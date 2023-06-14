#include <stdio.h>
#include <math.h>
#define ACU 0.0001
#define f1(x2, x3) ((17 - 20*(x2) + 2*(x3))/20)
#define f2(x1, x3) ((-18-3*(x1) + (x3))/20)
#define f3(x1, x2) ((25 - 2*(x1) + 3*(x2))/20)
// Gauss seidal
int main()
{
    float x1=0, x2=0, x3=0, y1, y2, y3;
    int i = 0;
    printf("\n     x1\t\t x2\t\t x3\n");    
    do
    {
        y1 = f1(x2, x3);
        y2 = f2(y1, x3);
        y3 = f3(y1, y2);

        if(fabs(y1-x1)<ACU && fabs(y2-x2)<ACU && fabs(y3-x3)<ACU)
        {
            printf("\n\nx1 = %f", y1);
            printf("\n\nx2 = %f", y2);
            printf("\n\nx3 = %f", y3);
            i = 1;
        }
        else
        {
            x1 = y1;
            x2 = y2;
            x3 = y3;
            printf("\n   %f\t   %f\t   %f", x1, x2, x3);
        }
    } while (i != 1);
    
    return 0;
}