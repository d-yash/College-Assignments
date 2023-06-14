#include <stdio.h>
void fun();

int main()
{
    int n,temp;
    start:
    printf("\nEnter the vlaue of n : ");
    scanf("%d",&n);
    printf("%d",n*n);
    
    printf("\nEnter 1 to continue ..\tEnter 0 to stop ..\n");
    scanf("%d",&temp);
    if(temp==1)
    {
        goto start;
    } 
    else
    {
        goto stop;
    }
    stop:
    
    return 0;
}
