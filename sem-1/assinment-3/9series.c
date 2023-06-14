#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int x,n,sum=0,final,i;

    printf("Entr the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of N : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        final=pow(x,i);
        sum+=final;
    }
    printf("\nAnswer = %d",sum);
    return 0;
}
