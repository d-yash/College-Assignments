#include <stdio.h>
    
int main()
{
    int arr[3];
    int sum=0;
    int i;

    printf("Enter any 3 numbers : ");
    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<3; i++)
    {
        sum=sum+arr[i];
    }
    printf("SUM : %d",sum);
    return 0;
}