#include <stdio.h>
#include <math.h>

double getResult(double num)
{
    return (pow(num,3)+(5*num)-9);
}
double getMid(double num1, double num2)
{
    double sum = num1 + num2;
    return (sum/2);
}

int main()
{
    double r1, positive, negatve;
    int maxCount;
    int markPositive = 0, markNegative = 0;
    while(1)
    {
        if(markPositive == 1)
            break;
        printf("\nAssume the first root : ");
        scanf("%lf", &r1);
        if(getResult(r1) > 0)
        {
            positive = r1;
            printf("\nPositive end is set succesfully");
            markPositive = 1;   
        }
    }
    while(1)
    {
        if(markNegative == 1)
            break;
        printf("\nAssume the second root : ");
        scanf("%lf", &r1);
        if(getResult(r1) < 0)
        {
            negatve = r1;
            printf("\nNegative end is set succesfully");
            markNegative = 1;   
        }
    }
    printf("\nEnter the value of Maximum Count : ");
    scanf("%d", &maxCount);

    // printf("Positive : %lf \t Negative : %lf \t Maxcount : %d", positive, negatve, maxCount);
    
    for(int i=0; i<maxCount; i++)
    {
        double mid = getMid(positive, negatve);
        double ans = getResult(mid);
        // printf("\nPositive : %lf \t Negative : %lf", positive, negatve);

        // printf("\nMid : %lf \t Ans : %lf", mid, ans);
        if(ans >= 0)
        {
            if(mid < positive)
                positive = mid;
        }
        if(ans < 0)
        {
            if(mid > negatve)
                negatve = mid;
        }
        printf("\nIteration %d  -->  Root : %lf", i+1, mid);
    }
    return 0;
}