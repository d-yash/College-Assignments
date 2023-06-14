#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r1,r2,i,sum;

   // printf("Enter the limits : ");
    //scanf("%d%d",&r1,&r2);

    r1=100;
    r2=200;

    for(i=100;i<=200;i++)
    {
        if(i%7==0)
        {
            sum=sum+i;
        }
    }
    printf("\nTHe sum = %d",sum);
    return 0;
}
