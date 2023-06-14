#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,sum=0,r1,r2;

    printf("Enter the limits : ");
    scanf("%d%d",&r1,&r2);

    if(r1<r2)
    {
        for(a=r1;a<=r2;a++)
        {
            if(a%7==0)
            {
                printf("%d ",a);
                sum+=a;
            }
        }
        printf("\n\nSum=%d",sum);
    }
    else
    {
        printf("\n\nEnter the limits properly");
    }
    
    return 0;
}

