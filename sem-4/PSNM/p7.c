#include <stdio.h>
#define f(x) 1/(1+x)
// 1/3 rule
int main()
{
    float a, b, h, n, x=0, y=0, y0, yn;
    float sumOdd = 0, sumEven = 0, root;
    int i = 0;
    printf("Enter the value of lower limit : ");
    scanf("%f", &a);        //a = 0
    printf("Enter the value of upper limit : ");
    scanf("%f", &b);        //b = 6
    printf("Enter the value of sub-intervals : ");
    scanf("%f", &n);        //n = 6
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
        else if(i%2 == 0)   
        {
            sumEven += y;
        }    
        else 
        {
            sumOdd += y;
        }
        x += h;
    }
    root = (h/3)*((y0+yn) + 4*sumOdd + 2*sumEven);
    printf("Root : %f", root);      // Root : 1.9587...
    return 0;

}