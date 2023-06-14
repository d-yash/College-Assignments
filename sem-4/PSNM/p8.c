#include <stdio.h>
#define f(x) 1/(1+x)
// 3/8 rule
int main()
{
    float a, b, h, n, x=0, y=0, y0, yn;
    float sum = 0, sumThree = 0, root;
    int i = 0;
    printf("Enter the value of lower limit : ");
    scanf("%f", &a);        // a = 0
    printf("Enter the value of upper limit : ");
    scanf("%f", &b);        // b = 6
    printf("Enter the value of sub-intervals : ");
    scanf("%f", &n);        // n = 6
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
        else if(i%3 == 0)   
        {
            sumThree += y;
        }    
        else 
        {
            sum += y;
        }
        x += h;
    }
    root = (3*h/8)*((y0+yn) + 2*sumThree + 3*sum);
    printf("Root : %f", root);      // Root : 1.96...
    return 0;

}