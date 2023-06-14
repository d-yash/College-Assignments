#include <stdio.h>
#define f(x) 1/(1+x*x)
//trapezoidal
int main()
{
    float a, b, h, n, x=0, y=0, y0, yn;
    float sum = 0, root;
    int i = 0;
    printf("Enter the value of lower limit : ");
    scanf("%f", &a);       // a = 0
    printf("Enter the value of upper limit : ");
    scanf("%f", &b);       // b = 1
    printf("Enter the no. of sub-intervals : ");
    scanf("%f", &n);       // n = 5
    h = (b-a)/n;

    x = a;
    for(i=0; i<=n; i++)
    {
        y = f(x);
        if(i == 0)
        {
            y0 = y;
        }
        else if(i == n)
        {
            yn = y;
        } 
        else 
        {
            sum += y;
        }
        x += h;
    }
    root = (h/2)*((y0+yn) + 2*sum);
    printf("Root : %f", root);      //Root : 0.783732
    return 0;

}