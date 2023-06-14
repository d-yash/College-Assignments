#include <stdio.h>

int main()
{
    float x[10], y[10][10], X, p=1, u, h, val;
    int i, j, n;

    printf("\nEnter the no. of eqations : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("x[%d] : ", i);
        scanf("%f", x[i]);
        printf("y[%d][1] : ", i);  
        scanf("%f", y[i]);    
    }
    return 0;
}