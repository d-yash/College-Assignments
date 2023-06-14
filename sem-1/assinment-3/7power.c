#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y,i,ans=1;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    printf("Enter the value of y : ");
    scanf("%d",&y);

    for(i=1;i<=y;i++)
    {
        ans*=x;
    }
    printf("\nAnswer = %d",ans);
    return 0;
}
